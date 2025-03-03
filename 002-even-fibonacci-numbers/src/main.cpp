#include <iostream>

int main()
{
	unsigned int x = 1;
	unsigned int y = 2;
	unsigned int sum = 2;
	
	while(y <= 4e6)
	{
		unsigned int next_number = x + y;
		if(next_number <= 4e6 and next_number % 2 == 0)
		{
			sum += next_number;
		}
		x = y;
		y = next_number;
	}
	
	std::cout << "Solution: " << sum << "\n";
	
	return 0;
}
