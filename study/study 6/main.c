#include<stdio.h>
int is_prime(int m);
int main()
{
 int n;
 do
 {
 printf("input a number");
 scanf("%d", &n);
 if(n<1)
 break;
 if(is_prime(n))
 {
 printf("%d is prime\n", n);
 }
 else
 {
 printf("%d is not prime\n", n);
 }
 }while(1);
 return 0;
}
int is_prime(int m)
{
 int I;
 for(I = 2; I<m;I++)
 {
 if(m%I==0)
return 0;
 }
 return 1;
}
