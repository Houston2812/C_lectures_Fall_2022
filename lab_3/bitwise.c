#include "stdio.h"

int main()
{
    // 0100
    unsigned int a = 4;

    // shift right
    // 0010
    printf("Value %u\n", a>>1);

    printf("Not %u\n: ", ~a);
    // shift left
    // 0100
    printf("Value %d\n", a<<1);
    return 0;
}