//Write a program that calculates the sum of numbers in an array. The
//array size is variable upon the user need.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int size,i,j,sum;
    printf("enter the size of array");
    scanf("%d",&size);
    ptr=(int*)malloc(size*sizeof(int));
    if(!ptr)
    {
         printf("Out of Memory\n");
         exit(1);
    }
    for(i=0;i<size;i++)
    {
         printf("enter element\n");
        scanf("%d",&ptr[i]);
    }
    for(j=0;j<size;j++)
    {
        sum += ptr[j];
    }
        printf("The Sum = %d", sum);
    return 0;

}
