//Write a program to make a simple calculator
//using switch-case.
//The calculator takes the operation (+ or – or * or /)
// and takes the two input arguments and print the results
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c =0;
    int x, y, result=0;
printf("entere operator: ");
    c = getchar();
    printf("Enter x \n");
    scanf("%d", &x);
    printf("Enter y \n");
    scanf("%d",&y);
/*printf("entere operator: ");
c = getchar();
scanf("%c",&c);*/
    switch(c)
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
    printf("%d %c %d = %d", x, c, y, result);

    return 0;
}
