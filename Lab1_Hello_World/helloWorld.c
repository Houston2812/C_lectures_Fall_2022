#include "stdio.h"
#include "stdbool.h"
#include "float.h"
#include "limits.h"

int main()
{
    int integer1 = 5;
    short integer2 = 4;
    long integer3 = 10;
    long long integer4 = 100;

    float float1 = 5.0;
    double double1 = 10.0;
    long double double2 = 11.0;

    char a = 65;
    char b[100] = "My name is Hus";

    bool flag = true; 
    bool flag2 = 1;

    printf("Hello World\n");
    printf("Printing integer %d\n", integer1);
    printf("Printing floating number %f\n", float1);
    printf("Printing float with precision of 3 %+10.3f hi\n", float1);
    printf("Character: %c\n", a);
    printf("String: %s\n", b);

    printf("size of integer %d\n", sizeof(a));
    printf("Size of long int 5 is: %d byte(s)\n", sizeof(integer3));
    printf("Bool %d\n", flag);

    // printf("\n-----------------------\n"
    //         "Storage size: %d bytes\n"
    //         "Smallest positive value: %E\n"
    //         "Greatest positive value: %E\n"
    //         "Precision: %d decimal digits\n",
    //         sizeof(float), FLT_MIN, FLT_MAX, FLT_DIG);

    // printf("Variables of type char store values from %d to %d\n", CHAR_MIN, CHAR_MAX);
    // printf("Variables of type unsigned char store values from 0 to %u\n", UCHAR_MAX);
    // printf("Variables of type short store values from %d to %d\n", SHRT_MIN, SHRT_MAX);
    // printf("Variables of type unsigned short store values from 0 to %u\n", USHRT_MAX);
    // printf("Variables of type int store values from %d to %d\n", INT_MIN, INT_MAX);
    // printf("Variables of type unsigned int store values from 0 to %u\n", UINT_MAX);
    // printf("Variables of type long store values from %ld to %ld\n", LONG_MIN, LONG_MAX);
    // printf("Variables of type unsigned long store values from 0 to %lu\n", ULONG_MAX);
    // printf("Variables of type long long store values from %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    // printf("Variables of type unsigned long long store values from 0 to %llu\n", ULLONG_MAX);
    // printf("\nThe size of the smallest positive non-zero value of type float is %.3e\n", FLT_MIN);
    // printf("The size of the largest value of type float is %.3e\n", FLT_MAX);
    // printf("The size of the smallest non-zero value of type double is %.3e\n", DBL_MIN);
    // printf("The size of the largest value of type double is %.3e\n", DBL_MAX);
    // printf("The size of the smallest non-zero value of type long double is %.3Le\n", LDBL_MIN);
    // printf("The size of the largest value of type long double is %.3Le\n", LDBL_MAX);
    
    double d = 9.0/5.0 ;
    double f = 3 * 1.2;
    float left = 9%5;

    printf("Division: %f; Left: %f\n; Multip: %f\n", d, left, f);

    int num = 5;
    printf("initial %d\n", num);
    num++;
    printf("incremented %d\n", num);
    num--;
    printf("decremented: %d\n", num);
    num+=3;
    printf("Incremented by 3 %d\n", num);
    return 0;  

    int user_number;
    scanf("Enter number: %d", user_number);
    printf("User number: %d\n", user_number);
}