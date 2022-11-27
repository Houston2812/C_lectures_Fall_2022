#include <stdio.h>

int main(){
    char mystring[40] = "This is my string";

    printf("mystring: %s\n", mystring);

    char mystring2[] = "THis is second string of another lenght";
    printf("mystring2: %s\n", mystring2);

    char string_array[][50] = {
        "This is the first string of an array",
        "This is the second string of an array",
        "This is the third string of an array"
    };

    printf("Printing array of strings:\n");
    printf("\tFirst way:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\t\tString number %d: %s\n", i, string_array[i]);
    }

    printf("\tSecond way:\n");
    for (int i = 0; i < sizeof(string_array)/sizeof(string_array[0]); i++)
    {
        printf("\t\tString number %d: %s\n",i, string_array[i]);
    }
}