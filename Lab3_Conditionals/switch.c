#include "stdio.h"

int main()
{
    int a = 5;
    switch (a)
    {
    case 5:
        printf("a is equal to 5\n");
        break;
    case 3:
        printf("a is equal to 3\n");
        break;
    default:
        printf("a is not equal to 3 or 5\n");
    }

    return 0;
}
