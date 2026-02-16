
/*
 * Sum of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 };
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float c[5];

    int length = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i <= length - 1; i++)
    {
      c[i] = a[i] + b[i];
    }
   
    printf("Vector C...\n");
    length = sizeof(c) / sizeof(c[0]);
    for (int v = 0; v <= length - 1; v++)
    {
      printf("%f\n", c[v]);
    }
    

    /*
    Code to compute the sum
    Store your answer in array c
    Print your final answer
    */
    return 0;
 }
