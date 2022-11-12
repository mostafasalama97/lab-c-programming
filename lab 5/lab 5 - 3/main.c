//Employee with Functions (try to divide Ass#2 into 2 functions):
//struct Employee AddNewEmployee();
//void DisplayEmployee(struct Employee);
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void AddNewEmployee();
void DisplayEmployee(int);

typedef struct Employee
{
    int id ;
    float salary;
    char name[50];
} Employee;
Employee emp_array[SIZE];

int main()
{
    int x;
    printf("enter employee number ");
    scanf("%d", &x);
    AddNewEmployee(x);
    DisplayEmployee(x);
    return 0;
}
void AddNewEmployee(int x)
{
    for (int i = 0; i < x; ++i)
    {
        printf("Employee %d data\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emp_array[i].id);
        fflush(stdin);
         printf("Employee Name: ");
        //scanf("%s", emp_array[i].name);
        gets(emp_array[i].name);
        fflush(stdin);
        printf("Employee Salary: ");
        scanf("%f", &emp_array[i].salary);
    }
}
void DisplayEmployee(int x)
{
    for (int i = 0; i < x; ++i)
    {
        printf("Employee ID: %d\n", emp_array[i].id);
        printf("Employee Name: %s\n", emp_array[i].name);
        printf("Employee Salary: %f\n", emp_array[i].salary);

    }
}
