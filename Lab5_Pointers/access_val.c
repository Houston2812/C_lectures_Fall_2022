#include <stdio.h>

int main()
{
    int number = 5;
    int *pointer_to_number = &number;
    int result;

    result = *pointer_to_number + number;

    printf("The result is equal to: %d\n", result);
    return 0;
}