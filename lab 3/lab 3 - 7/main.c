//Write a C Function that prints the cube of any number.
#include <stdio.h>
#include <stdlib.h>
void cuber (int x );
int main ()
{
    int x =0;
    int c = 0;
    printf("enter number for calculating the cubic :");
    scanf("%d",&x);
 cuber ( x );
    return(0);
}
 void cuber (int x ){
     int c=0;
    if ( x > 0 || x<0){
        c = x*x*x ;
        printf("cube for your number %d is:%d",x,c);
    }
    else{
        printf("enter valid number (psitive or negative)");
    }
}
