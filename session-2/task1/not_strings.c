
#include <stdio.h>

int main( void ) {

    char charArray[5] = {'h','e','l','l','o'};
    char charString[] = "hello";
 
    printf("As array: %s\n",charArray);     // strange behaviour?
    printf("Length of array: %ld\n",sizeof(charArray));   // expected result

    printf("As string: %s\n",charString);   // normal behaviour
    printf("Length of string: %ld\n",sizeof(charString));   // includes silent character \O

    char correctArray[6] = {'h','e','l','l','o','\0'};  // null terminator added
    printf("Correct Array: %s\n",correctArray);   // normal behaviour
    printf("Length of correct array: %ld\n",sizeof(correctArray));   // expected result

    return 0;
}
