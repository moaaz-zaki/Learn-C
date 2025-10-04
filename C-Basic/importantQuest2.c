// Include stdio.h library to use printf & scanf function
#include <stdio.h>

//Define constant using #define
#define STRING "%s\n"
#define NESO "Welcome to neso academy!"

// define main function
void main(void)
{

    //! Q1: Placing zero in front of value. the value treated as an octal value
    int var = 052;               // oct  1 0 1 | 0 1 0 =>  52
    printf("%d\n", var);        // dec   1 0 1 0 1 0   =>  42
    printf("%o\n", var);        //%o => to print octal value
            
    //! Q2: Placing (0X) in front of value. the value treated as an hexadecimal value
    int var2 = 0X52;            // oct  16 ^ 1 | 16 ^ 0 =>  52
    printf("%d\n", var2);       // dec  2 * (16 ^ 0) + 5 * (16 ^ 1)   =>  82
    printf("%x\n", var2);       //%x => to print hexadecimal value        
    
    //! Q2: using Two Macro
    printf(STRING, NESO);

} // end main function