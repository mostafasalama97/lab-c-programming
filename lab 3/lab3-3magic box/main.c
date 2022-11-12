#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

int main()
{
    int row=1;
    int col=0;
    int size=0;
    int i=0;
    printf("Enter the size of required magic box (it should be odd): ");
    scanf("%d",&size);
    col=(size+1)/2;
    if (size%2==0 || size<=0){
        printf("Enter an odd positive value\n");
    }
    else {
        for (i=1;i<=(size*size);i++) {
            gotoxy(col*5,row);
            printf("%5d",i);
            if (i%3 == 0) {
                row+=1;
            }
            else {
                col-=1;
                row-=1;
                if (row == 0) {
                    row = size;
                }
                if (col == 0) {
                    col = size;
                }
            }
            }
        }
    }
