//Write a C Function that takes one character and checks if it alphabet or not.
#include <stdio.h>
#include <stdlib.h>

int max(char c);
int main()
{
    char c ;

    printf("/n enter charcter  : ");
    scanf("%c",&c);

    char checkalphabet(char c);
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
        printf("%c is an alphabet.", c);
}
    else
        {
        printf("%c is not an alphabet.", c);
}
}
    return 0;
}
