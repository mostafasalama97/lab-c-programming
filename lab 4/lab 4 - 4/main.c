//C Program to Find the Frequency of Characters in a String
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
   char str[100];
   int c = 0, count[26] = {0}, x = 0;

   printf("Enter a string\n");
  scanf("%s",str);
    //str = getchar ();
   while (str[c] != '\0') {
      if (str[c] >= 'a' && str[c] <= 'z') {
         x = str[c] - 'a';
         count[x]++;
      }

      c++;
   }

   for (c = 0; c < 26; c++)
         printf("%c occurs %d times in the string.\n", c + 'a', count[c]);

   return 0;
}
