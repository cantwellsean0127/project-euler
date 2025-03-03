#include <iostream>

int main()
{
	unsigned int largest_prime_factor = 1;
	
	for(unsigned int n = 2; n < (int)(600851475143/2); n++)
	{
		if(600851475143 % n == 0)
		{	
			bool is_prime = true;
			for(unsigned int f = 2; f <	(int)(n/2); f++)
			{
				if (n % f == 0)
				{
					is_prime = false;
					break;
				}
			}
			if(is_prime)
			{
				largest_prime_factor = n;
			}
		}
	}
	
	std::cout << "Solution: " << largest_prime_factor << "\n";
		
	return 0;
}
