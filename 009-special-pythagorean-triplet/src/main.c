/*
 * A Pythagorean triplet is a set of three natural numbers,
 * a < b < c, for which, a^2 + b^2 = c^2.
 * For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int product = 0;
    int c = 3;
    while (product == 0)
    {
        for (int a = 1; a < c / 2; a++)
        {
            for (int b = a + 1; b < c; b++)
            {
                if (a + b + c == 1000 && a * a + b * b == c * c)
                {
                    product = a * b * c;
                }
            }
        }
        c++;
    }

    printf("Solution: %d \n", product);

    return 0;
}