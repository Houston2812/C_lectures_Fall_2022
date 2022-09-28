#include <stdio.h>

int main()
{
    int treshold;
    
    printf("Enter the treshold: ");
    scanf("%d", &treshold);

    int counter = 0;
    do
    {
        printf("Counter is equal to: %d\n", counter);
        counter++;
    } while (counter < treshold);

    printf("Treshold reached");
    
    return 0;
}