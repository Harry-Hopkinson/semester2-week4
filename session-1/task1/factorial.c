
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int v[]={ 6, 10, 25 };
    int length = sizeof(v) / sizeof(v[0]);

    for (int arrNum = 0; arrNum <= length - 1; arrNum++)
    {
      int factorial = 1;
      for (int i = 1; i <= v[arrNum]; i++)
      {
         factorial = factorial * i;
      }

      printf("Factorial of %i is %i\n", v[arrNum], factorial);
    }

    return 0;
 }
