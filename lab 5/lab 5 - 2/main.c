//C Program to take information of Array of 5 Employees, then display their data. (EmpArr_of_Struct)
#include <stdio.h>

struct employee {
 char name[100];
 int age;
 float salary;
};

int main(){
   struct employee employees[10];
   int counter, index, count, totalSalary;

   printf("Enter Number of Employees\n");
   scanf("%d", &count);

   /* Storing employee detaisl in structure array */
   for(counter=0; counter<count; counter++){
       printf("Enter Name, Age and Salary of Employee\n");
       scanf("%s %d %f", &employees[counter].name,
           &employees[counter].age, &employees[counter].salary);
   }

   /* Calculating average salary of an employee */
   for(totalSalary=0, index=0; index<count; index++){
       totalSalary += employees[index].salary;
   }

   printf("Average Salary of an Employee is %f\n",
       (float)totalSalary/count);

   return 0;
}
