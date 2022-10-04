#include <stdio.h>

int main()
{
    int treshold;
    
    printf("Enter the treshold: ");
    scanf("%d", &treshold);

    int counter = 0;
    while (counter < treshold)
    {
        printf("Counter is equal to: %d\n", counter);
        counter++;
    }

    printf("Treshold reached");
    
    return 0;
}