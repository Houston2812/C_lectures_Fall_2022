#include <stdio.h>

int main()
{
    int sum = 0;
    int counter;

    printf("Enter the limit: ");
    scanf("%d", &counter);
    for (int i = 0; i < counter; i++) 
    {
        if (i % 5 == 0)
            continue;
        
        sum += i;
    }
    printf("Sum of all integers not dividable by 5 is equal to: %d", sum);
    return 0;
}