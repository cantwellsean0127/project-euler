#include <iostream>
#include <stdint.h>
#include <array>
#include <unordered_map>
#include <vector>

int main()
{
    // These variables will keep track of the longest chain discovered and it's corresponding number
    uint64_t number_with_longest_chain = 0;
    uint64_t longest_chain = 0;

    // This map will keep track of all the chain lengths we've discovered so far
    std::unordered_map<uint64_t, uint64_t> discovered_chains;

    // Here, we go through each number up to 1 million (exclusive)
    for(uint32_t current_number = 2; current_number < 1e6; current_number++)
    {
        // This variable contains the length of a previously discovered chain (if we find one)
        uint64_t discovered_chain_length = 0;

        // This vector contains our current chain
        std::vector<uint64_t> current_chain;

        // This number keeps track of what number we're currently on within the chain
        uint64_t current_chain_number = current_number;

        // As long as our chain has not ended, we keep looping
        while(current_chain_number != 1)
        {
            // If we've already discovered the chain for the number we're on, we can notate it's length and end the loop
            if (discovered_chains.find(current_chain_number) != discovered_chains.end()) 
            { discovered_chain_length += discovered_chains[current_chain_number]; break; }
           
            // If we haven't already discovered the chain, we add the number to our current chain
            else
            { current_chain.push_back(current_chain_number); }

            // Calculates the next number in the chain
            if (current_chain_number % 2 == 0)
            { current_chain_number /= 2;}
            else
            { current_chain_number *= 3; current_chain_number++;}
        }

        // Goes through each number in our current chain and adds it's chain length to the discovered chains
        for(uint64_t index = 0; index < current_chain.size(); index++)
        {
            discovered_chains[current_chain[index]] = current_chain.size() - index + discovered_chain_length;
            
            // We do not account for the final 1 at the end of the chain (we break from the loop after finding it). However, we do not want to add this extra length if we found a discovered chain because it already accounts for the 1 at the end of the chain
            if(discovered_chain_length == 0) 
            { discovered_chains[current_chain[index]]++; }
        }

        // Here, we update our variables for tracking of the longest chain discovered and it's corresponding number
        uint64_t chain_length = current_chain.size() + discovered_chain_length;
        if (chain_length > longest_chain)
        { number_with_longest_chain = current_number; longest_chain = chain_length; }
    }

    // Show the user the solutions
    std::cout << "Solution: " << number_with_longest_chain << "\n";

    // Cleanly exit
    return 0;
}