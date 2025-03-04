#include <iostream>

int main()
{
	unsigned long long sum = 0;
	
	for(unsigned int n = 2; n < 2e6; n++)
	{
		bool is_prime = true;
		for(unsigned int x = 2; is_prime and x*x <= n; x++)
		{
			if(n % x == 0)
			{
				is_prime = false;
			}
		}
		
		if(is_prime)
		{
			sum += n;
		}
	}
	
	std::cout << "Solution: " << sum << "\n";
}
