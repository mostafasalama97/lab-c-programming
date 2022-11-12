//Write a program to make a simple calculator
//using switch-case.
//The calculator takes the operation (+ or – or * or /)
// and takes the two input arguments and print the results
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operat;
    int x, y, result=0;



    printf("Enter x (+,-,*,/) y \n");
    scanf("%d %c %d", &x, &operat, &y);

    switch(operat)
    {
        case '+':
            result = x + y;
            break;

        case '-':
            result = x - y;
            break;

        case '*':
            result = x * y;
            break;

        case '/':
            result = x / y;
            break;

        default:
            printf("understand");
    }
    printf("%d %c %d = %d", x, operat, y, result);

    return 0;
}
