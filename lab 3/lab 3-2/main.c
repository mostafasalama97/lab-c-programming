//Simple Menu with 3 choices.
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int main()

{
    int choice = 0;

    do
{
 printf("Menu\n");
 printf("1. mostafa\n");
 printf("2. mohamed\n");
 printf("3. salama\n");
 printf("make your choice\n");
 scanf("%d",&choice);

 switch (choice)
 {
    case 1:
         system("cls");
         printf("your choice is :\n");
     printf("1. mostafa\n");

         break;
    case 2:
         system("cls");
         printf("your choice is :\n");
    printf("2. mohamed\n");

         break;
    case 3:
         system("cls");
        printf("your choice is :\n");
    printf("3. salama\n");

         break;

     default: printf("Wrong Choice. Enter again\n");
                    break;
 }

} while (choice < 1 && choice >3);


return(0);
}
