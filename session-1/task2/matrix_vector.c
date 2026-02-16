
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4];
    float c[4];

    /*
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    */

    for (int i = 0; i <= 3; i++)
    {
      for (int j = 0; j <= 3; j++)
      {
        a[i][j] = 1.0;
        b[j] = 1.0;
        c[i] = c[i] + (a[i][j] * b[j]);
      }
    }

    printf("Matrix C...\n");
    for (int i = 0; i <= 3; i++)
    {
      for (int j = 0; j <= 3; j++)
      {
        printf("%f ", c[i]);
      }
      printf("\n");
    }

    return 0;
 }
