//Write a program that calculate the sum of integer from 1 to 100
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int sum=0;
    for (i=0;i<=100;i++)
    {
        sum += +i;
    }
    printf("the sum of integer number from 1 to 100 is = %d ",sum);
    return 0;
}
