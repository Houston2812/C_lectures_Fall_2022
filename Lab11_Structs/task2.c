#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// define size of the array
#define SIZE 3

// declare structure
struct Employee
{
    int ID;
    char *first_name;
    char *last_name;
    int age;
    int work_experience;
};

// create type of struct Employee
typedef struct Employee Employee;

// declare function for the creation of employee
Employee create(int ID, char *first_name, char *last_name, int age, int work_experience);

// declare function to search for the employee
Employee search(Employee *employees, int ID);

// a function used to display an Employee
void show(Employee employee);

int main(){
    // 1. create the structure
    // 2. create array of structures
    // 3. input value from user
    // 4. implement a search function
    // 5. show information of Employee


    // initialize array of employees
    Employee employees[SIZE];

    for (int i = 0; i < SIZE; i++) 
    {
        int ID;
        char *first_name = (char *)calloc(255, sizeof(char));
        char *last_name = (char *)calloc(255, sizeof(char));
        int age;
        int work_experience;

        printf("Enter the data of Employee:\n");
        
        // ID is the same as the index of element in array
        ID = i;

        // enter the first_name
        printf("\tFirst name: ");
        scanf("%s", &first_name);

        // enter the last_name
        printf("\tLast name: ");
        scanf("%s", &last_name);

        // enter the age
        printf("\tAge: ");
        scanf("%d", &age);

        // enter the work experience
        printf("\tWork experience: ");
        scanf("%d", &work_experience);

        // create an employee
        employees[i] = create(ID, first_name, last_name, age, work_experience);

    }
    
    // ID that should be searched
    int search_ID;

    printf("Enter the ID of the employee to search: ");
    scanf("%d", &search_ID);

    // looking for the employee
    Employee searched_Employee = search(employees, search_ID);

    // check whether the employee was found or not
    if (searched_Employee.ID == 0) 
    {
        printf("Employee with the ID = %d, does not exist\n", search_ID);
    } else {
        printf("Employee was found\n");
        show(searched_Employee);
    }
    return 0;
}

Employee create(int ID, char *first_name, char *last_name, int age, int work_experience)
{
    Employee employee;
    employee.first_name = (char *) malloc(sizeof(char) * strlen(first_name));
    employee.last_name = (char *) malloc(sizeof(char) * strlen(last_name));

    employee.ID = ID;    
    strcpy(employee.first_name, first_name);
    strcpy(employee.last_name, last_name);

    employee.age = age;
    employee.work_experience = work_experience;

    return employee;
}

Employee search(Employee *employees, int ID) 
{
    for (int i = 0; i < SIZE; i++) 
    {
        if (employees[i].ID == ID) 
        {
            return employees[i];
        }
    }
    
    // return an Employee with ID = 0, if an employee was not found
    Employee tmp = {0, "", "", 0, 0};
    return tmp;
}

void show(Employee employee)
{
    printf("\tID: %d\n", employee.ID);
    printf("\tFirst name: %s\n", employee.first_name);
    printf("\tLast name: %s\n", employee.last_name);
    printf("\tAge: %d\n", employee.age);
    printf("\tWork experience: %d\n", employee.work_experience);
}