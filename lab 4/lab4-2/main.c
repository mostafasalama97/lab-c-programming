//C Program to take char and displays if it is "Normal or Extended key" along with its Ascii value.
#include <stdio.h>
#include <stdlib.h>

int main()
{
     char ch = getch();
    if (ch == -32)
    {
    printf("extended key : ");

    ch = getch();
    printf("%d",ch);
    }
   else {
    printf("normal key : ");
    printf("%d",ch);
   }
    return 0;
}
