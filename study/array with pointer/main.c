//Write a program that read 10 element then print their sum using array and pointer
#include <stdio.h>
#include <stdlib.h>
#define size 3

int main()
{
    float arr[size];
    float *ptr;
    float sum;
    int i=0;
    ptr = arr;
    for(i=0;i<size;i++)
    {
        printf("enter element %d=",i+1);
        scanf("%f",ptr+i);
    }
    for(i=0;i<size;i++)
    {
        sum += *ptr;
        ptr++;
        //printf("sum of array = %d",sum);
    }
    printf("sum of array = %f",sum);
    return 0;
}
