#include <stdio.h>
#include <stdlib.h>


char conv(char lowerChar);
int main()
{
    char lowerChar, upperChar;
    int ascii;
    printf("Enter a lowercase Character: ");
    scanf("%c", &lowerChar);

char conv(char lowerChar );
{
    if (lowerChar >= 'a' && lowerChar <= 'z') {
   ascii = lowerChar;
    upperChar = ascii-32;
    printf("\nIts Uppercase = %c", upperChar);
    getch();
    }
    else{
        printf("enter lower alphapet");
    }
}

    return 0;
}
