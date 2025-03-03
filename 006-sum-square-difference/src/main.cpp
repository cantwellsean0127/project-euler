#include <iostream>

int main()
{
	unsigned int solution = 0;
	
	unsigned int sum_of_squares = 0;
	unsigned int square_of_sums = 0;
	for(unsigned int n = 1; n <= 100; n++)
	{
		sum_of_squares += n*n;
		square_of_sums += n;
	}
	square_of_sums = square_of_sums * square_of_sums;
	
	solution = square_of_sums-sum_of_squares;
	
	std::cout << "Solution: " << solution << "\n";
	
	return 0;
}	
