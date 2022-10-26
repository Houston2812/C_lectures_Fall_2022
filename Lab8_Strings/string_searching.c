#include <stdio.h>
#include <string.h>

int main() 
{
    char string[20] = "This is my array";

    char character1 = 'T';
    char character2 = 'O';
    
    printf("Character searching\n");
    printf("\tLooking for character1\n");
    if (strchr(string, character1) != NULL) {
        printf("\t\tCharacter \'%c\' is located in string - \"%s\"\n", character1, string);
    } else {
        printf("\t\tNOT FOUND\n");
    }

    printf("\n\tLooking for character2\n");

    if (strchr(string, character2) != NULL) {
        printf("\t\tCharacter \'%c\' is located in string - \"%s\"\n", character1, string);
    } else {
        printf("\t\tNOT FOUND\n");
    }

    printf("String searching\n");

    char string1[] = "This is string with key";
    char string2[] = "key";

    printf("\tString1: %s\n\tString2: %s\n", string1, string2);

    printf("\tLooking for string2 in string1\n");

    printf("The occurence happens at: %s\n", strstr(string1, string2));
    return 0;
}