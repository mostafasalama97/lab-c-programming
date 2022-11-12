//Write a C program to check whether a given number is positive or negative or zero
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    printf("/n enter x value : ");
    scanf("%d",&x);
    if(x>0){
        printf("x is even number");
        }
    else if(x=0){
        printf("x is zero number");
    }
    else{
         printf("x is odd number");
    }
    return 0;
}



