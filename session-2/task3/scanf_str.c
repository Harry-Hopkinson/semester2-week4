
#include <stdio.h>

int main( void ) {
    char input[10];

    // int count = scanf("%s",input); bad code as it causes a buffer overflow if more than 9 chars
    int count = scanf("%9s", input); // limit to 9 characters to prevent buffer overflow

    printf("Read %d value\n",count);
    printf("Values: %s\n",input);

    return 0;
}
