//Write a program that read the grade and print if it is grade A, B, C, or
//Failed. Knowing that:
//A if the grade greater than 90
//B if the grade greater than 80
//C if the grade greater than 60
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int grade =0;
    printf("ENTER YOUR GRADE ");
    scanf("%d",&grade);
    if (grade >=90 )
    {
        printf("A");
    }
     else if (grade <=80 && grade >= 90 )
     {
          printf("B");
     }
     else if (grade <=60 && grade >=80)
    {
        printf("C");
    }
     else if (grade >= 60 )
     {
          printf("FAIL");
     }
    return 0;
}
