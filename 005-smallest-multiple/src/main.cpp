#include <iostream>

int main()
{

	unsigned int solution = 0;
	
	for(unsigned int m = 380; solution == 0; m += 20)
	{
		if(m % 11 == 0 and m % 12 == 0 and m % 13 == 0 and m % 14 == 0 and m % 15 == 0 and m % 16 == 0 and m % 17 == 0 and m % 18 == 0 and m % 19 == 0)
		{
			solution = m;
		}
	}
	
	std::cout << "Solution: " << solution << "\n";

	return 0;
}
