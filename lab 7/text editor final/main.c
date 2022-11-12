#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //ÚÔÇä Çßáã Çá operating system
#define size 25
void draw_box();
//void ShowConsoleCursor (int showflag);
//void ShowConsoleCursor (int showflag);
void move (char click);
void erase(char *body);
void edit (char *body,char event);
void home(char click);
void end(char click);


char click=0;;
char body[size]={'/0'};
int i=0,j=0,x=0,y =0;
char ch;

void main()
{

   while(click!=13)//13 = enter
    {   gotoxy(x,y);

        click = getch();
        if (click==-32){

            click=getch();
            switch(click){
                case 75://left arrow

                case 77://right arrow

                        // gotoxy(30,30);
                    move(click);
                    break;
                case 71://home button
                        // gotoxy(30,30);
                     home(click);
                    break;
                case 79://end button
                        // gotoxy(30,30);
                         end(click);
                    break;

            }
        }
        else if(click == 8 && x>0){
            i--;
            x--;
            erase(&body[i]);
            system("cls");
          //  gotoxy(20,20);
           // textattr(240);

            printf("%s",body);
         //   color (i,size);

        }
        else if(click!=8 && click!=13 && x<size) {


            edit(&body[i],click);
            i++;
            x++;
            system("cls");
            gotoxy(0,0);

            printf("%s",body);

        }
    }
}

void move(char click)
{
    if(click== 77){
        i++;
        x++;
    }
    else if(click ==75){
        i--;
        x--;
    }
}
void erase(char *body){

    int j=0;
    while(*(body+j)!='\0'){
     *(body+j)=*(body+j+1);
     j++;
    }

}
void edit (char *body,char click)
{

     *body=click;


}
void home(char click)
{//int x,y;
    if(click == 71)
     //gotoxy(0,0);
     x=0;
     y=0;
    i=0;
}
void end(char click)
{
    if(click == 79)
     //gotoxy(200,0);
     x=200;
     y=0;
        i=size;
}
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
