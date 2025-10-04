//include stdio.h library to use printf & scanf Function
#include <stdio.h>

//! choosing capital letters for name is good practice
#define PI 3.14159

//! We can use macros like function
#define add(x,y) x+y

//! We can using multipli line usin backslash(\)
#define greater(x, y) if (x > y) \
                        printf("%d is greater than %d\n", x, y); \
                      else \
                        printf("%d is greater than %d\n", y, x);

extern int a;
int b = 9;
extern int c = 10;


int increament () {
    
    static int count ;
    count += 1;

    return count;
}

//Define Main function
void main ( void ){

    //!extern => no memory is allocated .only decleared variable
    extern int b ;
    printf("%d\n", a);
    printf("%d\n", b);

    //?Warning => the variable is allocated and it will be consider define
    printf("%d\n", c);

    int value;
    value = increament();
    value = increament();
    value = increament();

    // value = count + 3;

    printf("%d\n", value);


    //!Preprocessor (not compiler) will replace name with value
    printf("%.5f\n", PI);

    //! We can use macros like function
    printf("addition of two numbers: %d\n", add(3, 4));

    //!First expasion then evaluation
    printf("Result of expression a* b + c is: %d\n", 5 * add(3, 4));

    //! We can using multipli line usin backslash(\)
    greater(5, 6);

    //!Some predefine
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);

    //!using scanf Function
    int var3, var4;

    //Get the value from user
    printf("Enter The First Number: ");
    scanf("%d", &var3);  //?Ammpersend[&] => address of operator

    printf("Enter The Second Number: ");
    scanf("%d", &var4);  //?Ammpersend[&] => address of operator

    printf("%d + %d = %d", var3, var4, var4 + var3);
}
