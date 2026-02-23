
/*
 * We expect to use the following program by providing a list of command line data
 * - 1 integer value
 * - 1 string 
 * - 1 double value
 * Process the command line arguments and print them with appropriate formatting.
 * Test your code, eg.  ./cmd_line_data -2 abcd 4.2
 *
 * Implement a similar code in Python and compare it to the C code.
 */

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char **argv ) {
    
    if(argc != 4)
    {
        printf("Usage: %s <integer> <string> <double>\n", argv[0]);
        return 1;
    }

    int i = atoi(argv[1]);
    char *s = argv[2];
    double d = atof(argv[3]);

    printf("Integer: %d\n", i);
    printf("String: %s\n", s);
    printf("Double: %f\n", d);
    
    return 0;
}
