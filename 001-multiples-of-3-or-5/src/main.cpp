#include <iostream>

int main()
{
	
	unsigned int sum = 0;	
	
	for(unsigned int n = 0; n < 1000; n++)
	{
		if(n % 3 == 0 or n % 5 == 0)
		{
			sum += n;
		}
	}
	
	std::cout << "Solution: " << sum << "\n";
	
	return 0;
}
