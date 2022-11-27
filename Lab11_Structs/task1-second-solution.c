#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Length{
    double yards;
    double inches;
    double feet;
};

typedef struct Length Length;

// declared the sum function
Length add(Length l1, Length l2);

// declared the show function
void show(Length l);

int main()
{
    // 1. define the structures Length -> yards, feet, inches - done
    // 2. define the add function -> Length l1, length l2, returns sum - partially done
    // 3. define show function -> to print the value - partially done
    // 4. get data from user - done
    // 5. print sum

    // user will enter arbitrary number of elements
    Length sum;
    // sum = sum + l -> while user enters the data
    // int sum = 0;
    sum.feet = 0;
    sum.inches = 0;
    sum.yards = 0;
    
    char action[255] = "";

    do
    {   
        strcpy(action, "");

        sum.feet = 0; 
        sum.inches = 0;
        sum.yards = 0;
        
        Length l;
        double value;
        char measurement_type[255];

        printf("Please enter your value: ");
        scanf("%lf %s", &value, &measurement_type);

        // 1 yards 1 
        // 1 inches
        // 1 feet

        // add - 1 struct

        // sum 2 Lengths -> yard + yard, inch + inch, feet + feet
        // to ensure it, we store everything as yard, inch, feet

        if (strcmp(measurement_type, "yards") == 0)
        {
            // 5 yards
            // 5 yards -> x inches
            // 5 yards -> y feet
            l.yards = value;
            l.inches = value * 36;
            l.feet = value * 3;
        }
        else if (strcmp(measurement_type, "inches") == 0)
        {
            l.inches = value;
            l.feet = value / 12;
            l.yards = value / 36;
        }
        else if (strcmp(measurement_type, "feet") == 0)
        {
            l.feet = value;
            l.inches = value * 12;
            l.yards = value / 3;
        }
        
        sum = add(sum, l);
        
        printf("Printing the sum\n");
        show(sum);
        
        printf("Do you want to enter another value? [y/n]: ");
        scanf("%s", &action);
    } while (strcmp(action, "y") == 0);
}

// defie the add function
Length add(Length l1, Length l2)
{
    // it should sum inches with inches
    // sum yards with yards
    // sum feet with feet
    // return Length sum

    Length sum;

    sum.inches = l1.inches + l2.inches;
    sum.feet = l1.feet + l2.feet;
    sum.yards = l1.yards + l2.yards;

    return sum;
}

// define the show function
void show(Length l)
{
    printf("The value is %lf yards - %lf inches - %lf feet\n", l.yards, l.inches, l.feet);
}
