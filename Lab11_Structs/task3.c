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
Employee* sort(Employee *employees, char *sort_by, int (*comparator)(char* sort_by, Employee employee1, Employee employee2));

// function used to compare the employees by the member functions
int comparator(char* sort_by, Employee employee1, Employee employee2);

// a function used to display an Employee
void show(Employee employee);

// a function used to display an Employee array
void show_array(Employee *employees);

int main(){
    // 1. create the structure
    // 2. create array of structures
    // 3. input value from user
    // 4. implement a sort function
    // 5. show information of Employees


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
        scanf("%s", first_name);

        // enter the last_name
        printf("\tLast name: ");
        scanf("%s", last_name);

        // enter the age
        printf("\tAge: ");
        scanf("%d", &age);

        // enter the work experience
        printf("\tWork experience: ");
        scanf("%d", &work_experience);
       // create an employee
        employees[i] = create(ID, first_name, last_name, age, work_experience);

        free(first_name);
        free(last_name);
    }
    
    // sort the array of employees
    char sort_by[255];
    printf("Enter the key used for the sorting: ");
    scanf("%s", &sort_by);
    sort(employees, sort_by, comparator);

    printf("Printing the elements of sorted array\n");
    show_array(employees);

    return 0;
}

Employee create(int ID, char *first_name, char *last_name, int age, int work_experience)
{
    Employee employee;
    employee.first_name = (char *) calloc(strlen(first_name), sizeof(char));
    employee.last_name = (char *) calloc(strlen(last_name), sizeof(char));
    

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

void show_array(Employee *employees)
{
    for(int i = 0; i < SIZE; i++) 
    {
        show(employees[i]);
        printf("-----------\n");
    }
}

Employee* sort(Employee *employees, char *sort_by, int (*comparator_function)(char* sort_by, Employee employee1, Employee employee2))
{
    for (int i = 1; i < SIZE; i++) 
    {
        Employee employee_key = employees[i];
        int index = i - 1;

        while (index >= 0 && comparator(sort_by, employee_key, employees[index]) > 0)
        {
            employees[index + 1] = employees[index];
            index--;
        }
    
        employees[index + 1] = employee_key;
    }

    return employees;

}

int comparator(char* sort_by, Employee employee1, Employee employee2)
{
   if (strcmp(sort_by, "first_name") == 0) 
   {
        return strcmp(employee1.first_name, employee2.first_name) ;
   } 
   else if(strcmp(sort_by, "last_name") == 0)
   {
        return strcmp(employee1.last_name, employee2.last_name) ;
   } 
   else if(strcmp(sort_by, "ID") == 0) 
   {
        if (employee1.ID < employee2.ID)
            return 1;
        else
            return -1;
   } 
   else if(strcmp(sort_by, "age") == 0)
   {
        if(employee1.age < employee2.age)
            return 1;
        else  
            return -1;
   } 
   else if(strcmp(sort_by, "work_experience") == 0)
   {
        if(employee1.work_experience < employee2.work_experience)
            return 1;
        else    
            return -1;
   }   
}