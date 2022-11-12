//Write a program that print the maximum of a set of 5 positive numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    float max ;
    float val ;
    for(i=0;i>=5;i++)
    {
       printf("Enter the element number %d : ", i + 1);
        scanf("%f", &val);
        if(val < 0)
     {
        printf("The number must be positive");
        i--;
     }
     else
     {
     if(val > max)
     {
        max = val;
     }
        }
     }
     printf("The maximum number is : %f", max);
     return 0;
    }
