#include "stdio.h"

int main() {
    char name[100];
    int prev_value;
    int current_value;

    printf("Please enter your name: ");
    scanf("%s", &name);

    printf("Please enter previous value: ");
    scanf("%d", &prev_value);

    printf("Please enter current value: ");
    scanf("%d", &current_value);

    int unit_difference = current_value - prev_value;
    float payment = 25 + unit_difference * 0.2;

    printf("Used amount of units: %d\n", unit_difference);
    printf("You should pay %f dollars\n", payment);



    return 0;
}