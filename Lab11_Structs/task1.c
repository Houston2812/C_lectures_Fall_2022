#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Length
{
    double yards;
    double feet;
    double inches;
};

typedef struct Length Length;

// declare create object function
Length create(double value, char * measurement);

// declare add function
Length add(Length l1, Length l2);

// declare show function
void show(Length l);


int main()
{
    while (true)
    {
        double lenght;
        char measurement_type[255];

        printf("Enter the lengths in following format: <value> <type>\n\tType could be [yards, feet, inches]\n");

        // input first element
        printf("First: ");
        scanf("%lf %s",&lenght, &measurement_type);

        Length l1 = create(lenght, measurement_type); 
        // input second element
        printf("Second: ");
        scanf("%lf %s",&lenght, &measurement_type);

        Length l2 = create(lenght, measurement_type); 

        printf("Printing first element: \n");
        show(l1);

        printf("Printing second element: \n");
        show(l2);
        
        // find the sum of element
        Length l_sum = add(l1, l2);
        printf("Sum of elements: \n");
        show(l_sum);

        printf("-----------------------------------------------------\n");
    }
    
    return 0;
}

// definition of create function
Length create(double value, char * measurement) {
    Length tmp; 

    if (strcmp(measurement, "yards") == 0) 
    {
        tmp.yards = value;
        // inches = yards * 36
        tmp.inches = value * 36;
        // feet = yards * 3
        tmp.feet = value * 3;
    } else if (strcmp(measurement, "inches") == 0) {
        tmp.inches = value;
        // yards = inches / 36
        tmp.yards = value / 36;
        // feet = inches / 12
        tmp.feet = value / 12;
    } else if (strcmp(measurement, "feet") == 0) {
        tmp.feet = value;
        // inches = feet * 12
        tmp.inches = value * 12;
        // yards = feet / 3
        tmp.yards = value / 3;
    } else {
        printf("Wrong value of measuremet was entered!");
        tmp.feet = 0;
        tmp.inches = 0;
        tmp.yards = 0;

    }

    return tmp;
}

// definition of show function
void show(Length l)
{
    printf("\t1. %lf %s\n", l.feet, "feets");
    printf("\t2. %lf %s\n", l.inches, "inches");
    printf("\t3. %lf %s\n", l.yards, "yards");
}


Length add(Length l1, Length l2) 
{
    Length tmp;

    tmp.feet = l1.feet + l2.feet;
    tmp.inches = l1.inches + l2.inches;
    tmp.yards = l1.yards + l2.yards;

    return tmp;
}