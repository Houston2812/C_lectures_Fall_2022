#include <stdio.h>
#include <ctype.h>

#define MaxRegularHours 40 // define a constant

int main()
{
    // Comparative operators
    /*
    < Is the left operand less than the right operand
    <= Is the left operand less than or equal to the right operand
    == Is the left operand equal to the right operand
    != Is the left operand not equal to the right operand
    > Is the left operand greater than the right operand
    >= Is the left operand greater than or equal to the right operand
    */

   printf("5 > 6  = %d\n", 5>6);

   // Logical operators
   /*
   && - AND
   || - OR
   ! - NOT
   */

  // Bitwise operators
  /*
  & -> bitwise AND
  | -> bitwise OR
  ^ -> bitwise Exclusive OR
  ~ -> bitwise NOT
  << - > left shift
  >> - > right shift
  */
    // 5 = 00000101
    // 6 = 00000110
    unsigned char a = 5, b = 6;
    printf("%d & %d = %d\n", a, b, a&b); 
    printf("%d | %d = %d\n", a, b, a|b);
    printf("%d ^ %d = %d\n", a, b, a^b);
    printf("~%d = %d\n", a, ~a);
    printf("%d << 2 = %d\n", a, a<<2); //00010100
    printf("%d >> 1 = %d\n", b, b>>1); //00000011

    // The basic if statement
    /*
    if(expression)
        Statement1;
        Statement2;
        ...;
        Statement3;   

    */
    printf("\n-----------------\n");
    int my_weight = 89; // Weight in kg
    int your_weight = 76; // Weight in kg
    if(your_weight > my_weight){
        printf("You are heavier than me.\n");
    }
    
    if(your_weight < my_weight){
        printf("I am heavier than you.\n");
    }
    if(your_weight == my_weight)
    {
        printf("We are exactly the same weight.\n");
    }

    /*
    if(expression)
    {
        StatementA1;
        StatementA2;
        ...
    }
    else
    {
        StatementB1;
        StatementB2;
        ...
    }
    Next_statement;
    */
    const double unit_price = 3.50; // Unit price in dollars
    int quantity = 0;
    printf("Enter the number that you want to buy:"); // Prompt message
    scanf(" %d", &quantity); // Read the input
    // Test for order quantity qualifying for a discount
    double total = 0.0; // Total price
    if(quantity > 10) // 5% discount
        total = quantity*unit_price*0.95;
    else // No discount
        total = quantity*unit_price;
    printf("The price for %d is $%.2f\n", quantity, total);



    /*
    if(expression1) // Weather is good?
    {
        StatementA; // Yes - Go out in the yard
        if(expression2) // Cool enough?
            StatementB; // Yes - Sit in the sun
        else
            StatementC; // No - Sit in the shade
    }
    else
        StatementD; // Weather not good - stay in
    Statement E; // Drink lemonade in any event
    */
    // Convert uppercase to lowercase
    char letter = 0; // Stores a character
    printf("Enter an uppercase letter:"); // Prompt for input
     scanf("%c", &letter); // Read a character
    // Check whether the input is uppercase
    if(letter >= 'A') // Is it A or greater?
        if(letter <= 'Z') // and is it Z or lower?
        { // It is uppercase
            letter = letter - 'A' + 'a'; // Convert from upper- to lowercase
            printf("You entered an uppercase %c\n", letter);
        }
        else // It is not an uppercase letter
            printf("Try using the shift key! I want a capital letter.\n");


    /*
    switch(integer_expression)
    {
        case constant_expression_1:
            statements_1;
            break;
            ....
        case constant_expression_n:
            statements_n;
            break;
        default:
            statements;
            break;
    }
    */
    char ch = 'a';
    switch(tolower(ch))
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("The character is a vowel.\n");
            break;
        case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j': case 'k':
        case 'l': case 'm': case 'n': case 'p': case 'q': case 'r': case 's': case 't':
        case 'v': case 'w': case 'x': case 'y': case 'z':
            printf("The character is a consonant.\n");
            break;
        default:
            printf("The character is not a letter.\n");
            break;
    }
    return 0;
}