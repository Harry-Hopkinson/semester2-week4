
/*
Name: Harry Hopkinson
Student ID: 201956529
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv )
{
    // 4 chars x 10 Max + null terminator
    char buffer[41];

    // start at 1 to avoid the program name
    for (int i = 1; i < argc; i++)
    {
        strcat(buffer, argv[i]);
        if (i < argc - 1) strcat(buffer, "-");
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}