/*
 * A palindromic number reads the same both ways.
 * The largest palindrome made from the product of 2 2-digit numbers is 9009 (91 times 99).
 * Find the largest palindrome made from the product of 2 3-digit numbers.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int largest_palindrome;

    for (int x = 999; x >= 100; x--)
    {
        for (int y = x; y >= 100; y--)
        {

            int product = x * y;
            int product_temp = x * y;
            int reverse = 0;

            while (product > 0)
            {
                reverse *= 10;
                reverse += product % 10;
                product -= product % 10;
                product /= 10;
            }

            product = product_temp;

            if (product == reverse)
            {
                if (product > largest_palindrome)
                {
                    largest_palindrome = product;
                }
            }
        }
    }

    printf("Solution: %d \n", largest_palindrome);

    return 0;
}
