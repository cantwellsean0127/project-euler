#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{

    int triangle_number = 0;
    bool searching = true;
    for (int step = 1; searching; step++)
    {
        triangle_number += step;

        int divisor_cnt = 0;
        for (int factor = 1; factor <= sqrt(triangle_number); factor++)
        {
            if (triangle_number % factor == 0)
            {
                divisor_cnt += 2;
            }

            if (factor * factor == triangle_number)
            {
                divisor_cnt -= 1;
            }
        }

        if (divisor_cnt > 500)
        {
            searching = false;
        }
    }

    printf("Solution: %d \n", triangle_number);

    return 0;
}