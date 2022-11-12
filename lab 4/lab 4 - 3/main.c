//C Program to take firstName and lastName from user, then displays fullName.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{

char fullname[41] = "\0";
char fname[20] = "\0";
char lname[20]= "\0";
int i = 0 , j = 0 ;

printf("enter your first name %s" , fname);
gets(fname);
while(fname[i]!='\0')
{
    fullname[i]=fname[i];
    i++;

}
printf("enter your last name %s" , lname);
gets(lname);

while(lname[j]!='\0')
{
    fullname[i]=lname[j];
    i++;
    j++;
}
printf("enter your full name %s" , fullname);

return 0;
}
