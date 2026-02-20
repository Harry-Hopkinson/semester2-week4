
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n = 4;           
    float **a, *b, *c;

    /*
    Dynamically allocate the matrix a and vectors b and c using size n
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    Free the allocated memory
    */
    
    a = malloc(n * sizeof(float*));
    for (int i = 0; i < n; i++) {
        a[i] = malloc(n * sizeof(float));
    }
    b = malloc(n * sizeof(float));
    c = malloc(n * sizeof(float));

    for (int i = 0; i < n; i++) {
        b[i] = 1.0;
        c[i] = 0.0;
        for (int j = 0; j < n; j++) {
            a[i][j] = 1.0;
            c[i] += a[i][j] * b[j];
        }
    }

    printf("Result of matrix-vector product:\n");
    for (int i = 0; i < n; i++) {
        printf("%f\n", c[i]);
    }

    return 0;
 }
