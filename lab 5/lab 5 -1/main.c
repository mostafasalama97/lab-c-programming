/*C C Program to take single Employee's information(ID, Name, Salary, Bonus, Deduction)
, and display his code, name along with his net salary. (Emp_Struct)
*/

#include <stdio.h>

struct emp_struct{
    char    name[30];
    int     empId;
    float   salary;
    float   bonus;
    float   Deduction;
    float netsalary ;

};

int main()
{
    struct emp_struct emp;

    printf("\nEnter details :\n");
    printf("Name :");
    gets(emp.name);
    printf("ID :");
    scanf("%d",&emp.empId);
    printf(" Salary :");
    scanf("%f",&emp.salary);
    printf("emp.bonus :");
    scanf("%f",&emp.bonus);
    printf("emp.Deduction salary :");
    scanf("%f",&emp.Deduction);

    /*print employee details*/
    printf("\nEntered detail is: \n");
    printf("Name: %s \n",emp.name);
    printf("Id: %d \n",emp.empId);
    emp.netsalary = (emp.salary + emp.bonus) - emp.Deduction ;
    printf("netSalary: %f \n",emp.netsalary);
    return 0;
}
