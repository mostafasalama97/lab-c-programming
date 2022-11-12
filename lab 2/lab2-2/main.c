//Write a C program to check whether a given number is even or odd
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    printf("/n enter x value : ");
    scanf("%d",&x);
    if (x%2 == 0 )
      printf("%d is an even number", x);
   else
      printf("%d is an odd number", x);

    return 0;
}
