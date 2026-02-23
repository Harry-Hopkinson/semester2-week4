/*
 * Use the series approxiation to Pi 
 *  pi_n = 4 x ( 1 - 1/3 + 1/5 - 1/7 + 1/9 - ... )
 * to approximate Pi
 * and examine how accurate it is as 
 * you increase the number of terms, n.
 * Enter the number of terms, n,  as a command line argument.
 * ie. measure error = abs( Pi-pi_n )
 * Hint: math library function fabs(x) gives you the absolute value as a double. 
 * Print out the number of terms, the computed value pi_n and the error
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main( int argc, char **argv )
{
    double Pi = 3.1415926535897932;

    /*
    Your code
    */

    if (argc != 2)
    {
        printf("Usage: %s <number of terms>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    printf("Computing PI for %i terms\n", n);

    float fractional_part = 0.0f;
    for (int i = 0; i < n; i++)
    {
        fractional_part += pow(-1, i) / (2 * i + 1);
    }

    float answer = 4 * fractional_part;
    printf("PI Calculated with %i terms is %f\n", n, answer);

    return 0;
}
 