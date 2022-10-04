#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; ++i) 
    {
        printf("Within first loop(for)\n");
        int j = 0;
        while (j < i)
        {
            printf("\tWithin second loop (while)\n");
            j++;

            int k = 0;
            do
            {
                printf("\t\tWithin third loop (do while)\n");
                k++;
            } while (k < j);
        }
    }
    return 0;
}