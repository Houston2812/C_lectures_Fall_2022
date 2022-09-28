#include "stdio.h"

int main()
{
    int a, b;
    int c, d;

    printf("Please enter the first fraction: ");
    scanf("%d %d", &a, &b);
    
    printf("Please enter the second fraction: ");
    scanf("%d %d", &c, &d);

    int common_denominator = d * b;

    int common_nominator = a * (common_denominator / b) + c * (common_denominator / d);

    printf("Result is %d/%d\n", common_nominator, common_denominator);

    return 0;
}