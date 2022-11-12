//Write a program that calculate the net salary for a group of employee,
//knowing that the tax is 10% (net salary = salary * (1 – (tax/100)))
#include <stdio.h>
#include <stdlib.h>
#define size 5
int main()
{
    float emp_salary[size];
    float tax=0.1;
    float net_salary;
    int i=0;

    for(i=0;i<size;i++)
        {
            printf("enter employee salary for employee number %d = ",i+1);
            scanf("%f",&emp_salary[i]);
        }
        for(i=0;i<size;i++)
        {
            net_salary = emp_salary[i] * (1 - tax);
            printf("net salary  = %f \n",net_salary);

        }


    printf("Hello world!\n");
    return 0;
}
