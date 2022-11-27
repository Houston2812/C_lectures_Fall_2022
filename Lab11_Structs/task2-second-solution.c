#include <stdio.h>
#include <stdbool.h>

#define SIZE 10
// Employee: ID, first_name, last_name, age, work_experience
struct Employee {
    int ID;
    char first_name[255];
    char last_name[255];
    int age;
    int work_experience;
};

// ID generator -> that will randomly generate an id 
int get_ID();

// name generator -> pass alphabet, length of name and it will return the randomly generated name
char *name_generator(char *alphabet, int length);

typedef struct Employee Employee;

// function to print the information of employee
void show(Employee Employee);

// function to search for the employee with ID = search_ID 
int search(int search_ID, Employee *Employees, int size);

int main()
{
    // create struct employee - done
    // create array of type struct employee - done
    // input data about employees from the user - done
    // input ID of required employee from the user - done
    // search for the employee in the list of employees
    // show the result - partially done
    
    Employee Employees[SIZE];

    for (int i = 0; i < SIZE; i++) 
    {
        printf("Enter the information about employee %d\n", i + 1);
        // should be smth unique and sequential 
        // unique and sequential in this case is - i
        // Employees[i].ID = get_ID();
        Employees[i].ID = i + 1;

        // Employees[i].first_name = name_generator(alphabet, 5);
        printf("\tFirst name: ");
        scanf("%s", &Employees[i].first_name);

        // Employees[i].last_name = name_generator(alphabet, 8);
        printf("\tLast name: ");
        scanf("%s", &Employees[i].last_name);

        printf("\tAge: ");
        scanf("%d", &Employees[i].age);

        printf("\tWork experience: ");
        scanf("%d", &Employees[i].work_experience);        

        printf("Info of employeee\n");
        show(Employees[i]);

    }

    while (true)
    {
        int search_ID = 0;
        printf("Enter the ID of the user to search: ");
        scanf("%d", &search_ID);

        int employee_index = search(search_ID, Employees, SIZE);

        if (employee_index != -1) {
            printf("[+] Employee with ID = %d was found!\n", search_ID);
            show(Employees[employee_index]);
        } else {
            printf("[-] Employee was not found!\n");
        }
    }

}

void show(Employee Employee)
{
    printf("ID: %d; First name: %s; Last name: %s; Age: %d; Work experience: %d\n", Employee.ID, Employee.first_name, Employee.last_name, Employee.age, Employee.work_experience);
}

int search(int search_ID, Employee *Employees, int size)
{   
    // range of for is from [0, positive infinity]
    for(int i = 0; i < size; i++)
    {
        if (Employees[i].ID == search_ID)
            return i;
    }

    // return -1 when is not found
    return -1;
}
