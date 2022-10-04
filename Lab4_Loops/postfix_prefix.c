#include <stdio.h>

int main()
{
    int postfix_inc_check = 0;
    printf("Postfix increment %d\n", postfix_inc_check++);

    int prefix_inc_check = 0;
    printf("Prefix increment %d\n", ++prefix_inc_check);

    int postfix_dec_check = 1;
    printf("Postfix decrement %d\n", postfix_dec_check--);

    int prefix_dec_check = 1;
    printf("Prefix decrement %d\n", --prefix_dec_check);
    return 0;
}
