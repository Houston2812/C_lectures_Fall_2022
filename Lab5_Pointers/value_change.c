#include <stdio.h>

int main()
{
    int number = 5;
    int *pointer_to_number = &number;

    printf("Initial value of the number: %d\n", number);
    printf("Initial value pointer by the pointer: %d\n", *pointer_to_number);

    *pointer_to_number += 5;

    printf("Changed value of the number: %d\n", number);
    printf("Changed value pointer by the pointer: %d\n", *pointer_to_number);

    number += 5;

    printf("Second changed value of the number: %d\n", number);
    printf("Second changed value pointer by the pointer: %d\n", *pointer_to_number);

    return 0;
}