//Write a program that load a two dimensional array with the numbers 1
//through 12 and prints them row by row
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col,arr[3][4];
    int count=1;
    for(row=0;row<3;row++)
    {
       for(col=0;col<4;col++)
       {
           arr[row][col]=count;
       count++;
       }

    }
     for(row=0;row<3;row++)
    {
       for(col=0;col<4;col++)
       {
           printf("arr[%d][%d] = %d", row, col, arr[row][col]);
           printf("\n");
       }

    }


    return 0;
}
