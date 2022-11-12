#include <stdio.h>
#include <stdlib.h>
int add (int , int);
int subtract (int , int);
int multipl (int , int);
int div (int , int);
void main(void)
{
   int x=0 , y=0 , op;
   int resule;
   int (*calc[4]))(int ,int)=(add , subtract , multipl , div);

   printf("first number = \n");
   scanf("%d",&x);
   printf("second number = \n");
   scanf("%d",&y);
   printf("select your operation  \n");
   scanf("%d",&op);


   resule = calc[op-1](x,y);

   printf("resule = %d\n",resule);
}


int add (int a , int b) {return (a+b);}
int subtract (int a , int b) {return (a-b);}
int multipl (int a , int b) {return (a*b);}
int div (int a , int b) {return (a/b);}
