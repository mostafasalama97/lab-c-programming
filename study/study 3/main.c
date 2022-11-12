//Write a program to enter 1, 2, or 3 then the program write one, two or
//three otherwise write Out of range
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,y=0,z=0;
    printf("enter x value : ");
    scanf("%d",&x);

    switch (x){

    case 1:
            printf("one. ");
            break;
    case 2:
            printf("two. ");
            break;
    case 3:
            printf("three ");
            break;
    default:

            printf("out of range ");
 }
    return 0;
}
