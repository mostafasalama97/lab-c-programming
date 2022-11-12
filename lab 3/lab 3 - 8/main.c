#include <stdio.h>
#include <stdlib.h>
void mul (int x , int i);
int main()
{
    int x=0;
    int i =0 ;
    printf("enter your number\n");
    scanf("%d",&x);
   mul ( x , i);

    return 0;
}
 void mul (int x , int i)
    {
    for(i<=1 || i>1;i<=20;i++)
    {

         printf(" %d * %d = %d\n", x, i, x*i);

    }
    }
