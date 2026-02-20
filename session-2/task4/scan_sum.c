
#include <stdio.h>

int main( void ) {

    // define suitable data
    int num1, num2;
    char operator;

    // use scanf to read from the terminal
    num1 = scanf("%d %c %d", &num1, &operator, &num2);

    // print the output from scanf and the data values
    int answer;
    switch (operator)
    {
        case '+': // +
            answer = num1 + num2;
        case '-': // -
            answer = num1 - num2;
        case '*': // *
            answer = num1 * num2;
        case '/': // /
            if (num2 == 0) answer = 0;
            else answer = num1 / num2;
    }

    printf("Answer: %d\n", answer);

    return 0;
}