#include <iostream>

int main()
{
	unsigned int primes_found = 0;
	unsigned int most_recent_prime = 0;
	for(unsigned int n = 2; primes_found != 10001; n++)
	{
		bool is_prime = true;
		for(unsigned int x = 2; is_prime and x <= (unsigned int)(n/2); x++)
		{
			if(n % x == 0)
			{
				is_prime = false;
			}
		}
		
		if(is_prime)
		{
			primes_found++;
			most_recent_prime = n;
		}
	}
	
	std::cout << "Solution: " << most_recent_prime << "\n";

	return 0;
}
