/*
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
 * we can see that the 6th prime is 13.
 * What is the 10,001st prime number?
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int prime_count = 0;
    int n = 1;
    while (prime_count != 10001)
    {

        n += 1;

        bool is_prime = true;
        for (int x = 2; x <= sqrt(n); x++)
        {
            if (n % x == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
        {
            prime_count += 1;
        }
    }

    printf("Solution: %d \n", n);
}