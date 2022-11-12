//Write a program to read a number. If it is odd (multiply the number*2)
//then print it, if it is even print it.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    printf("x =  ");
    scanf("%d",&x);

    if (x%2==0)
    {
        printf("x is even number");
    }
    else{
                printf("x is odd number");
                x *= 2;
                printf("x = %d ",x);

    }

    return 0;
}
