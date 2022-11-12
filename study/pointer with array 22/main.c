//Write a program that print a string in a reverse order
#include <stdio.h>
#include <stdlib.h>
#define size 5
int main()
{
    char arr[size];
    int i=0;
    char *ptr;
    ptr=arr;
    for(i=0;i<size;i++)
    {
        printf("enter your string %d =\n",i+1);
        scanf("%s",ptr+i);
    }
    for(i=5;i<size;i--)
    {
         printf("your reverse array = %s",*ptr);
        *ptr--;
    }

    printf("Hello world!\n");
    return 0;
}
