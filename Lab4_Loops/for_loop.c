#include <stdio.h>

int main()
{
    int counter;

    printf("Enter how many iterations you want to have: ");
    scanf("%d", &counter);

    for (int i = 0; i < counter; i++) 
    {
        printf("Current iteration is: %d\n", i);
    }

    
    return 0;
}