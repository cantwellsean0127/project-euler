#include <iostream>
#include <cmath>

int main()
{
	unsigned int product=0;
	for(unsigned int a=1; product==0; a++)
	{
		for(unsigned int b=a+1; b<=1000-a;b++)
		{
			double c = std::sqrt(a*a+b*b);
			if(c == std::round(c))
			{
				if(a + b + (unsigned int)c == 1000)
				{
					product = a*b*c;
				}
			}
		}
	}
	
	std::cout << "Solution: " << product << "\n";

	return 0;
}
