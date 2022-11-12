//Write a program that reads a student grade percentage and prints "Excellent" if his grade is greater than or equal 85,
// "Very Good" for 75 or greater;
// "Good" for 65,
// "Pass" for 50,
 // "Fail" for less than 50
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degree = 0 ;
    printf("/n enter degree value : ");
    scanf("%d",&degree);
    if(degree>=85 && degree<=100 ){
        printf("your are excellent");
        }
    else if(degree>=75 && degree<85 ){
        printf("your are very good");
    }
    else if(degree>=65 && degree<75 ){
        printf("your are good");
    }
    else if(degree>=50 && degree<65 ){
        printf("your are pass");
    }
    else if(degree<50 ){
        printf("your are fail");
    }
    else{
         printf("ÏÎá ÇáäÊíÌÉ ÚÏá");
    }
    return 0;
}
