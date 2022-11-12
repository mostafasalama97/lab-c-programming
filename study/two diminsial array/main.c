//Write a program that have the salary of employee and give the sum of
//their salary.

#include <stdio.h>
#include <stdlib.h>
#define size 5
int main()
{
    float emp_salary[size];
    int i;
    float sum;
    //printf("enter no of employee = %d",size);

    for(i=0;i<size;i++)
    {
        printf("enter salary %d =",i+1);
        scanf("%f",&emp_salary[i]);
    }
    for(i=0;i<size;i++){
        sum += emp_salary[i];
    }
     printf("sum salary = %f",sum);

    return 0;
}

/*
#include <stdio.h>
#define EMP_NUM 5
int main()
{
 float salary[EMP_NUM];
 float SalarySum = 0;
 int i;
 for(i = 0 ; i <EMP_NUM ; i++)
{
 printf("Enter Salary %d", i+1);
 scanf("%f", &salary[i]);
 printf("\n");
}
for(i = 0 ; i <EMP_NUM ; i++)
{
 SalarySum += salary[i];
}
printf("Sum of salaries is %f", SalarySum);
 return 0;
}
*/
