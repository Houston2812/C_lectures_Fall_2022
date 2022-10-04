#include <stdio.h>

int main()
{
    int a, b, c;

    a = 5;
    b = 10;
    c = 3;

    // float result = a * b / c;
    float result = a * b / (float) c;
    printf("Result: %f\n", result);
    return 0;
}