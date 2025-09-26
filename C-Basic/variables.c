#include <stdio.h>
#include <limits.h>

int main()
{

    int val = 4;
    val = 3;

    printf("%d\n=======\n", val);

    int val1 = 4;
    int val2;
    val2 = val1;

    printf("%d\n=======\n", val2);

    int val5, val4, val3;
    val3 = val4 = val5 = 5;

    printf("%d\n=======\n", val3);
    printf("%d\n=======\n", val4);
    printf("%d\n=======\n", val5);

    int two = 2, three = 3, six = 6;
    int result = (two + three) * six / three;

    printf("I am new to programming but i know how to write arithmatic expressions like this: (%d + %d) * %d / %d \n", two, three, six, three);
    // printf("The result of this expression is: %d", (two + three) * six / three);
    printf("The result of this expression is: %d\n===================================================\n", result);

    printf("Size of Integer: %d Byte\n", sizeof(int));
    printf("Range of signed integer number %d : %d\n", INT_MIN, INT_MAX);
    printf("Range of Unsigned integer number %u : %u", 0, UINT_MAX);

    printf("\n===========================\n");

    printf("Size of long Integer: %ld Byte\n", sizeof(long int));
    printf("Range of signed integer number %ld : %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of Unsigned integer number %lu : %lu", 0, ULONG_MAX);

    printf("\n===========================\n");

    printf("Size of long Integer: %lld Byte\n", sizeof(long long));
    printf("Range of signed integer number %lld : %lld\n", LONG_LONG_MIN, LONG_LONG_MAX);
    printf("Range of Unsigned integer number %llu : %llu", 0, ULONG_LONG_MAX);

    printf("\n===========================\n");

    printf("Size of long Integer: %hd Byte\n", sizeof(short));
    printf("Range of signed integer number %hd : %hd\n", SHRT_MIN, SHRT_MAX);
    printf("Range of Unsigned integer number %hu : %hu", 0, USHRT_MAX);

    printf("\n===========================\n");

    printf("%u\n", 4294967295);
    printf("Over Flow: %u", 4294967295 + 1); // over flow

    printf("\n=======\n");

    printf("%d\n", 2147483647);
    printf("Over Flow: %d", 2147483647 + 1); // over flow

    printf("\n=======\n");

    printf("%d\n", -2147483648);
    printf("Over Flow: %d", 2147483648 - 1); // over flow

    printf("\n=======\n");

    char ch1 = 'n';
    char ch2 = 110;

    printf("%c : %d\n", ch1, ch1);
    printf("%c : %d\n", ch2, ch2);

    printf("=======\n");

    printf("Size of long Integer: %d Byte\n", sizeof(char));
    printf("Range of signed integer number %d: %d\n", CHAR_MIN, CHAR_MAX);
    printf("Range of Unsigned integer number %d : %u", 0, UCHAR_MAX);

    printf("\n===========================\n");

    //! Negative Value wont give you any additional
    ch1 = -127; // 1000 0001
    ch2 = 129;  // 1000 0001

    printf("%c \n", ch1);
    printf("%c\n", ch2);

    printf("=======\n");

    printf("Size of Integer: %d Byte\n", sizeof(float));
    printf("Size of Integer: %d Byte\n", sizeof(double));
    printf("Size of Integer: %d Byte\n", sizeof(long double));
    
    printf("\n===========================\n");

    float f1 = 3.1415926535897932;
    double f2 = 3.1415926535897932;
    long double f3 = 3.141592653589793213456;

    printf("%0.8f\n", f1);
    printf("%0.17lf\n", f2);
    printf("%0.20Lf\n", f3);

    printf("\n===========================\n");
    
    //!divide Integer by Integer
    printf("%d\n", 4 / 9);
    printf("%.2f\n", 4 / 9);
    printf("%.2f\n", 4.F / 9);  // (4.0 / 9.0) (4/ 9.0) (4 / 9.F)

    return 0;
}