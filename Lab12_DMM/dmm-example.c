#include <stdio.h>
#include <stdlib.h>

int SIZE = 10;

void print_arr(int *arr);

// int arr[], int *arr
int main()
{
    // create an array with malloc -> does not zeros the memory, so it is filled with trash data
    int *int_arr = (int *) malloc(sizeof(int) * SIZE);

    int *int_arr2 = (int *) calloc(sizeof(int), SIZE);

    printf("Printing malloc array: ");
    print_arr(int_arr);

    printf("Printing calloc array: ");
    print_arr(int_arr2);

    SIZE = SIZE / 2;

    int_arr = (int *) realloc (int_arr, SIZE);
    
    
    // realloc checks whether new length > or < than previous one
    // if new length is more than previous one 
    //     1. Allocated new array with the size equals to the new size
    //     2. copies everything from the first array to the second array 
    //     3. fills the empty new cells with 0
    // else if new length is less than previous one
    //     1. Allocates new array with the size equals to the new size
    //     2. Copies the elements from the previous array to the new array untill the given size
    // free(the memory of the previous array)
    // return new_array    

    printf("Printing reallocated array: ");
    print_arr(int_arr);

    return 0;
}

void print_arr(int *arr)
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}