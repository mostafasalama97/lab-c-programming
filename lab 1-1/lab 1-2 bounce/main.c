//6 - C Program to make simple calculations (add, sub, multiply, divid) on two integers
#include <stdio.h>
#include <conio.h>

int main(){

    int x, y;
    int sum, sub, mul;
    float division;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    sum = x + y;
    sub = x - y;
    mul = x * y;
    division = (float)x / y;


    printf("\nSum = %d", sum);
    printf("\nDifference  = %d", sub);
    printf("\nMultiplication = %d", mul);
    printf("\nDivision = %f", division);


    return 0;
}

