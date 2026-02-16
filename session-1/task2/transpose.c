
/*
 * Transpose of a matrix
 */

 #include <stdio.h>

 int main( void ) {
    int a[4][4];

    /*
    Intialise the matrix a to 2i-j.
    Print out matrix a. 
    Write code for the transpose - you can use other variables as necessary but not a cpoy of the matrix 
    Print the transpose.
    */

    printf("Matrix A...\n");
    for (int i = 0; i <= 3; i++)
    {
      for (int j = 0; j <= 3; j++)
      {
        a[i][j] = (2 * i) - j;
        printf("%i ", a[i][j]);
      }
      printf("\n");
    }

    printf("Transpose of Matrix A...\n");
    for (int i = 0; i <= 3; i++)
    {
      for (int j = 0; j <= 3; j++)
      {
        printf("%i ", a[j][i]);
      }
      printf("\n");
    }
    
    return 0;
 }
