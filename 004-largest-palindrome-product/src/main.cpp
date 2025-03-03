#include <iostream>

int main()
{
	unsigned int largest_palindrome_product = 0;
	
	for(unsigned int x = 100; x <= 998; x++)
	{
		for(unsigned int y = x; y <= 999; y++)
		{
			unsigned int product = x * y;
			unsigned int reversed_product = 0;
			unsigned int temp = product;
			while(temp > 0)
			{
				reversed_product *= 10;
				reversed_product += temp % 10;
				temp /= 10;
			}
			
			if(reversed_product == product and reversed_product > largest_palindrome_product)
			{
				largest_palindrome_product = product;
			}
		}
	}
	
	std::cout << "Solution: " << largest_palindrome_product << "\n";

	return 0;
}
