#include <stdio.h>

int main()
{
    int treshold = 5;

    while (treshold < 5)
    {
        printf("While loop is executed\n");
    }

    do
    {
        printf("Do while loop is executed\n");
        
    } while (treshold < 5);
    
    

    return 0;    
}