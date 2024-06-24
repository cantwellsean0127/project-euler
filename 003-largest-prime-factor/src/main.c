/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143?
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {

	// The given number requires 40 bits (5 bytes) of memory,
	// therefore we must use the long long data type
    long long n = 600851475143;
    long long lpf = 0;

    // Goes through each number up to half of n
    for (long long f = 2; f <= n/2; f++) {
    	
    	// Checks if the number is a factor of n
    	if (n % f == 0) {
    		
    		// Gets the factor's inverse
    		long long i = n / f;
    		
    		// Checks if the inverse is prime
    		bool p = true;
   		    for (long long x = 2; x <= sqrt(i); x++) {
		        if (i % x == 0) {
            		p = false;
            	}
    		}

    		// If the inverse is prime, this is the largest prime factor
    		if (p) {
    			lpf = i;
    			break;
    		}
    	}
    }

    printf("Solution: %lld \n", lpf);

    return 0;
}
