//Write a function takes 3 numbers as parameter, and returns the largest one among them... write a program to test it
#include <stdio.h>
#include <stdlib.h>

int max(int x, int y , int z);
int main()
{
    int x , y , z =0;

    printf("/n enter first value : ");
    scanf("%d",&x);
    printf("/n enter second value : ");
    scanf("%d",&y);
    printf("/n enter third value : ");
    scanf("%d",&z);
    int max(int x, int y , int z);
{


   if(x>z && x>y){
        printf("largest number  %d",x);
        }
    else if(z>x && z>y){
        printf("largest number  %d",z);
    }
    else{
         printf("largest number  %d",y);
    }
}

    return 0;
}

