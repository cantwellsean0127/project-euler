#include <iostream>
#include <cmath>

int main()
{
	uint64_t solution = 0;
	
	uint64_t amount_to_add = 0;
	uint64_t triangle_number = 0;
	
	while(solution == 0)
	{
		amount_to_add++;
		triangle_number += amount_to_add;
		
		uint64_t number_of_factors = 0;
		for(uint64_t factor = 1; factor < (uint64_t)(std::sqrt(triangle_number)); factor++)
		{
			if(triangle_number % factor == 0 and factor * factor != triangle_number)
			{ number_of_factors += 2; }
			else if(triangle_number % factor == 0 and factor * factor == triangle_number)
			{ number_of_factors++;}
			 
			if(number_of_factors > 500)
			{ solution = triangle_number; break; }
		}
	}
	
	std::cout << "Solution: " << solution << "\n";

	return 0;
}
