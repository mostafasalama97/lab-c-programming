//Receive character by character and then place the string terminator upon pressing enter, then display the string.
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
#include <dos.h>
#include <dir.h>
void extendnumber (char ch)
void gotoxy(int x,int y)
void SetColor(int ForgC)
int main (){



    return(0);
}


 void extendnumber (char ch);
 {

    char ch = getch();
    if (ch == -32)
    {
             printf("extended key : ");
    ch = getch();
    }
   else {
    printf("normal key : ");
    printf("%d",ch);
   }

 }
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


void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
