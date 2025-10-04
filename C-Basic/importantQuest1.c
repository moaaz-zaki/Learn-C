//Include stdio.h library to use printf and scanf function
#include <stdio.h>



//define the main function
void main ( void ){

    //! printf also return no.of characters that it prints
    printf("%d\n", printf("%s", "Hello World!"));

    printf("%10s\n", "Hello");
    printf("%.10s\n", "Hello");

    //!Overflow 
    char ch = 255;
    ch += 10;
    printf("%d\n", ch); 

    //!compiler implicitly assumed integer data type if you have not written data type
    signed j = -4;
    unsigned i = 1;
    printf("%u\n", i+j); 

    
}