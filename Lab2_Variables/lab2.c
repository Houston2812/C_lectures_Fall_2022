#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(){
    /*
    This is a comment used to give some description or explanation
    \' - a single quotation mark
    \" - a double quotation mark
    \? -  a question mark
    \\ - a backslash character
    \b - backspace
    \n - new line
    \t - horizontal tab
    '\0' - null character
    */
   printf("\"Any comment\" ...\n\n");

    // printf -> [flags][width][.precision]
    // flags: right alingment (+) or left alignment (-)
    // width: number of spaces
    // precision: floating point number

    printf("|||%-10.3f|||\n", 5.2);
    printf("|||%+10.1f|||\n", 12.2654);

    // placeholders
    /*
    %d - > decimal point
    %f - > floating point
    %lf - > double
    %c - > a single character
    %s - > a series of characters: strings
    */


    /*
    char  - > 1 byte = 8 bits
    short - > 2 bytes: short integer
    long  - > 4 bytes: long integer
    long long - > 8 bytes
    
    signed char + -
    max value = 2**(n-1)-1 
    min value = - 2**(n-1) 

    unsigned char +
    max value = 2**n-1
    min value = 0
    */
    /*
    long long h = 45;
    char ch ; // Declare a variable called ch
    ch = '5'; // Store a value in the variable ch - initialization
    printf("Size of char 5 is: %d byte(s)\n", sizeof(ch)); // print the memory size


    short int num = 5; // Declaration + initialization
    printf("Size of short int 5 is: %d byte(s)\n", sizeof(num));

    int num1 = 5;
    printf("Size of int 5 is: %d byte(s)\n", sizeof(num1));
    printf(sizeof(int))

    long int num2 = 5;
    printf("Size of long int 5 is: %d byte(s)\n", sizeof(num2));

    long long int num3 = 5;
    printf("Size of long long int 5 is: %d byte(s)\n", sizeof(num3));

    unsigned char ch1 = 256; // more than a max value
    printf("The value of unsigned char ch 256 is %d\n", ch1);
    */

    /*
    bool  - > 1 byte
    char  - > 1 byte
    int   - > 2 or 4 bytes
    float - > 4 bytes. Precision 6 digits
    double - > 8 bytes. Precision 15 digits
    long double - > 10 bytes. Precision 19 digits
    */
   
   /*
    printf("\n-----------------------\n");
    printf("Variables of type char occupy %u bytes\n", sizeof(char));
    printf("Variables of type short occupy %u bytes\n", sizeof(short));
    printf("Variables of type int occupy %u bytes\n", sizeof(int));
    printf("Variables of type long occupy %u bytes\n", sizeof(long));
    printf("Variables of type long long occupy %u bytes\n", sizeof(long long));
    printf("Variables of type float occupy %u bytes\n", sizeof(float));
    printf("Variables of type double occupy %u bytes\n", sizeof(double));
    printf("Variables of type long double occupy %u bytes\n", sizeof(long double));
    */

   /*
   // required:  <float.h>
    printf("\n-----------------------\n"
            "Storage size: %d bytes\n"
            "Smallest positive value: %E\n"
            "Greatest positive value: %E\n"
            "Precision: %d decimal digits\n",
            sizeof(float), FLT_MIN, FLT_MAX, FLT_DIG);
    */

   // Difference between double and float
    double d_var = 12345.6;
    float f_var = (float)d_var;
    printf("The floating point number: %18.10f\n",d_var);
    printf("has been stored in a variable \n"
                    "of type float as value: %18.10f\n",f_var);
    printf("The rounding error is %18.10f \n", d_var-f_var);


    // Max and min values can be assigned: required <limit.h>
    /*
    printf("\n-----------------------\n");
    printf("Variables of type char store values from %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Variables of type unsigned char store values from 0 to %u\n", UCHAR_MAX);
    printf("Variables of type short store values from %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Variables of type unsigned short store values from 0 to %u\n", USHRT_MAX);
    printf("Variables of type int store values from %d to %d\n", INT_MIN, INT_MAX);
    printf("Variables of type unsigned int store values from 0 to %u\n", UINT_MAX);
    printf("Variables of type long store values from %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Variables of type unsigned long store values from 0 to %lu\n", ULONG_MAX);
    printf("Variables of type long long store values from %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Variables of type unsigned long long store values from 0 to %llu\n", ULLONG_MAX);
    printf("\nThe size of the smallest positive non-zero value of type float is %.3e\n", FLT_MIN);
    printf("The size of the largest value of type float is %.3e\n", FLT_MAX);
    printf("The size of the smallest non-zero value of type double is %.3e\n", DBL_MIN);
    printf("The size of the largest value of type double is %.3e\n", DBL_MAX);
    printf("The size of the smallest non-zero value of type long double is %.3Le\n", LDBL_MIN);
    printf("The size of the largest value of type long double is %.3Le\n", LDBL_MAX);
    */


    // constant = fixed value that cannot be altered by the program during its execution
    const float PI = 3.14159;
    printf("PI = %.3f\n", PI);


    
    // Arithmetic operations
    /*
    + (addition)
    - (subtraction)
    * (multiplication)
    / (division)
    % (modulus)
    ++ (increment)
    -- (decrement)
    */
   
    int x = 5, y = 2;
    float z = (float) x / y; // typecasting
    float z1 = x / y;
    printf("x/(float)y = %f\n", z);
    printf("x/y=%f\n", z1);

    // input
    //scanf(placeholder, memory_address)
    double dval;
    printf("Enter a number: ");
    scanf("%lf", &dval);
    printf("You entered: %.1lf", dval);
    return 0;
}