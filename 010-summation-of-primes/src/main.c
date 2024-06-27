/*
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * Find the sum of all the primes below two million.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{

    unsigned long long sum = 0;
    for (int prime = 2; prime < 2e6; prime++)
    {
        bool is_prime = true;
        for (int factor = 2; factor <= sqrt(prime); factor++)
        {
            if (prime % factor == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
        {
            sum += prime;
        }
    }

    printf("Solution: %lld \n", sum);

    return 0;
}