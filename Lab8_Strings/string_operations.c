#include <stdio.h>
#include <string.h>


int main() {
    char strlen_check[20] = "This is my string";

    printf("Length of the string - strlen_check is - %d\n", strlen(strlen_check));
    printf("\n------------------------------------------\n\n");
    
    char strcpy_destination[50] = "This is destination string";
    char strcpy_source[30] = "This is source string";

    printf("Destination string: %s\n", strcpy_destination);
    printf("Source string: %s\n", strcpy_source);

    strcpy(strcpy_destination, strcpy_source);
    printf("Destination string: %s\n", strcpy_destination);
    printf("\n------------------------------------------\n\n");

    char strcat_first_part[] = "Hello, ";
    char strcat_second_part[] = "World";
    
    printf("First part: %s\nSecond part: %s\n", strcat_first_part, strcat_second_part);
    strcat(strcat_first_part, strcat_second_part);
    printf("Concatenated string: %s\n", strcat_first_part);
    printf("\n------------------------------------------\n\n");

    char strcmp_first[] = "This is origin string";
    char strcmp_first_copy[40];
    strcpy(strcmp_first_copy, strcmp_first); 
    char strcmp_second[] = "This string should be compared";
    printf("First string: %s\nCopy of first string: %s\nSecond string: %s\n", strcmp_first, strcmp_first_copy, strcmp_second);

    printf("Comparing first and second - strcmp(strcmp_first, strcmp_second): %d\n", strcmp(strcmp_first, strcmp_second));
    printf("Comparing first and its copy - strcmp(strcmp_first, strcmp_first_copy): %d\n", strcmp(strcmp_first, strcmp_first_copy));
    printf("\n------------------------------------------\n\n");

    return 0;
}