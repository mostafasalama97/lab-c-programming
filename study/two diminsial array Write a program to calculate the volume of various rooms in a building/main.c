//Write a program to calculate the volume of various rooms in a building
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}*/
#include <stdio.h>
#define NROOMS 2
int main()
{
 float vol[NROOMS];
 float rsize[NROOMS][3];
 int I,j;
 for(I = 0 ; I < NROOMS; I++)
 {
 printf("Length, breadth, height");
 printf("of room %d\n", I+1);
 for(j = 0; j<3; j++)
 {
 scanf("%f",&rsize[I][j]);
}
 }
 for(I = 0 ; I< NROOMS; I++)
 {
 vol[I] = rsize[I][0] * rsize[I][1] * rsize[I][2];
 }
 for(I = 0 ; I< NROOMS; I++)
 {
 printf("Vol. Of room %d is %f \n", I , vol[I]);
}
return 0;
}
