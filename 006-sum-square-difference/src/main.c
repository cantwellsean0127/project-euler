/*
 * The sum of the squares of the first 10 natural numbers is
 * 1^2 + 2^2 + ... + 10^2 = 385
 * The square of the sum of the first 10 natural numbers is,
 * (1 + 2 + ... + 10)^2 = 55^2 = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers
 * and the square of the sum is 3025 - 385 = 2640
 * Find the difference between the sum of the squares of the first one hundred natural numbers
 * and the square of the sum.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sum_of_squares = 0;
    int square_of_sums = 0;

    for (int n = 1; n <= 100; n++)
    {

        sum_of_squares += n * n;
        square_of_sums += n;
    }

    square_of_sums *= square_of_sums;

    int difference = sum_of_squares - square_of_sums;
    if (difference < 0)
    {
        difference *= -1;
    }

    printf("Solution: %d \n", difference);
}