#include <stdio.h>

int main()
{
    int counter;

    printf("Enter the treshold: ");
    scanf("%d", &counter);

    for (int i = 0; i < 100; i++)
    {
        if (i == counter) {
            printf("Threshold was reached\n");
            break;
        } else {
            printf("Current iteration is: %d\n", i);
        }
    }

    return 0;
}