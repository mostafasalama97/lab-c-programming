// C Program to Find the Length of a String without Using strlen()
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    int i = 0;
    int c = 0;
   printf("Enter a string\n");
    scanf("%s",str);
    while (str[c] != '\0') {
      if (str[c] >= 'a' && str[c] <= 'z') {
        i = str[c] - 'a';
         str[i]++;
      }

      c++;
   }
        printf("your string length is : %d",str[10]);

        return 0;
}
