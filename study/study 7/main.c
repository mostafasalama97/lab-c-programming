# include <stdio.h>
int fact(int n);
int main()
{
 int x, y;
 scanf("%d", &x);
 y = fact(x);
 printf("\n The factorial is : %d", y);
 return 0;
}
int fact(int n)
{
 int answer;
 if (n==1)
{
 answer = 1;
}
else
{
answer = n * fact(n-1);
}
return (answer);
}
