//C Program to Find the Largest Number Among Three Numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0 , y=0 , z=0;
    printf(" enter x value : ");
    scanf("%d",&x);
    printf(" enter y value : ");
    scanf("%d",&y);
    printf(" enter z value : ");
    scanf("%d",&z);
    if(x>z && x>y){
        printf("largest number  %d",x);
        }
    else if(z>x && z>y){
        printf("largest number  %d",z);
    }
    else{
         printf("larges is = %d", y);
    }
    return 0;
}
