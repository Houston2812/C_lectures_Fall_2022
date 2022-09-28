#include "stdio.h"

int main()
{
    int age;
    char university[100], faculty[100];

    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Please enter your university: ");
    scanf("%s", &university);

    printf("Please enter your faculty: ");
    scanf("%s", &faculty);

    if (age > 25 && university != "Yale" && faculty == "chemistry")  {
        printf("You are accepted for interview!\n");
    }
    if (university == "Harward" && age < 28 && faculty == "economics") {
        printf("You are accepted for interview!\n");
    }
    if (university == "Yale" && age > 25 && faculty != "chemistry") {
        printf("You are accepted for interview!\n");
    }  
    if  (university == "Yale" && faculty == "chemistry") {
        printf("You are accepted for interview!\n");
    }
    return 0;
}