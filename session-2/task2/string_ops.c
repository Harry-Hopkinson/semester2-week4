
/*
 * Some small tests of the string library
 */

#include <stdio.h>
#include <string.h>

int main( void ) {
    char str1[100] = "hello";
    char str2[100] = "goodbye";
    char str3[100];

    // use printf to verify the following tests

    // use 'strcmp' to compare 2 strings - print the return value
    int result = strcmp(str1, str2);
    if (result == 0) printf("%s and %s are the same\n", str1, str2);
    else printf("%s and %s are not the same\n", str1, str2);

    // use 'strcat' to concatenate 2 strings - print the resulting string
    char* concatenated_string = strcat(str1, str2);
    printf("Concatenating str1 and str2 gives: %s\n", concatenated_string);

    // use 'strcpy' to copy a string into str3 - print string 3
    strcpy(str3, concatenated_string);
    printf("String 3: %s\n", str3);

    return 0;
}
