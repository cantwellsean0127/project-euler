/*
 * 2,520 is the smallest number that can be divided
 * by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible
 * with no remainder by all of the numbers from 1 to 20?
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int smallest_multiple = 0;
    int n = 20;
    while (smallest_multiple == 0)
    {
        if (n % 20 == 0 && // If a number is divisable by 20, it's also divisable by 10, 5, and 4
            n % 19 == 0 &&
            n % 18 == 0 && // If a number is divisable by 18, it's also divisable by 9, 6, and 3
            n % 17 == 0 &&
            n % 16 == 0 && // If a number is divisable by 16, it's also divisable by 8
            n % 15 == 0 &&
            n % 14 == 0 && // If a number is divisable by 14, it's also divisable by 7
            n % 13 == 0 &&
            n % 12 == 0 &&
            n % 11 == 0)
        {
            smallest_multiple = n;
        }
        n += 2;
    }

    printf("Solution: %d \n", smallest_multiple);

    return 0;
}