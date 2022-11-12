#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //ÚÔÇä Çßáã Çá operating system
void draw_box();
void ShowConsoleCursor (int showflag);
void main(void)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);//İÇÑíÈá ÚÔÇä ÇÛíÑ áæä ÇáßáÇã ÇáãßÊæÈ Çáí ØÇáÚ İì ÇáÇæÊÈæÊ
    int pos=0;
    char ch;
    //int ch;
    /*ÎØíä Úáì ÈÚÖ == ÑŞãåã 205
    ÎØíä Úáì ÈÚÖ æÌÇííä ÈÒÇæíÉ ãÑÈÚ 201
    */

    /*for(ch=0;ch<=255;ch++) //åíØÈÚ ßá ÇáÇÔßÇá Çáì ãæÌæÏÉ ÚäÏì İì Çá c
        printf("%d %c in",ch,ch);*/
        draw_box();
        ShowConsoleCursor(0);
        pos=1;
        do{

        SetConsoleTextAttribute(console,15);//ÇäÇ åäÇ ÈÚãá áææÈ İåæ ãÈíÑÌÚÔ ÇáÔÇÔÉ ÓæÏÉ İáÇÒã ÇßÊÈ ÇáÓØÑ ÏÉ ÚÔÇä íÑÌÚ ÇÓæÏ ÊÇäì
                gotoxy(40,11);
                printf("1- add new record");
                gotoxy(40,12);
                printf("2- update new record");
                gotoxy(40,13);
                printf("3- delete existing record");
                gotoxy(40,14);
                printf("4- exit");



        switch(pos)
        {
        case 1:
                SetConsoleTextAttribute(console,240);//ÈÍÏÏ áæä ÇáßÊÇÈÉ İì ÇáßæäÓæá
                gotoxy(40,11);
                printf("1- add new record");
            break;

            case 2:
                    SetConsoleTextAttribute(console,240);//ÈÍÏÏ áæä ÇáßÊÇÈÉ İì ÇáßæäÓæá
                    gotoxy(40,12);
                    printf("2- update new record");
            break;

            case 3:
                    SetConsoleTextAttribute(console,240);//ÈÍÏÏ áæä ÇáßÊÇÈÉ İì ÇáßæäÓæá
                    gotoxy(40,13);
                    printf("3- delete existing record");

            break;

            case 4:
                    SetConsoleTextAttribute(console,240);//ÈÍÏÏ áæä ÇáßÊÇÈÉ İì ÇáßæäÓæá
                    gotoxy(40,14);
                    printf("4- exit");
            break;
        }
        ch=getch();
                if(ch==-32)
                ch=getch();
                if(ch==72)//Óåã áİæŞ
                {
                    pos --;
                    if(pos==0)
                        pos=4;
                }
                else if(ch==80)//Óåã áÊÍÊ
                {
                    pos ++;
                 if(pos==5)
                        pos=1;
                }


    }while(ch!=13);

    gotoxy(40,18);
    SetConsoleTextAttribute(console,15);
    printf("your selection is %d",pos);
}
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void draw_box()//ÚÔÇä ÇÑÓã ãÓÊØíá
{
    int i;//Òì ßÇæäÊÑ ÚÔÇä íÑÓã ÎØæØ áÇÒŞÉ İì ÈÚÖ
   gotoxy(39,10);
   printf("%c",201);
   for(i=1;i<35;i++)
       printf("%c",205);
          printf("%c",187);
   gotoxy(39,11);
   printf("%c",186);
   for(i=1;i<35;i++)
       printf("%c",32);//ÈÚãá space İÇÖíÉ
          printf("%c",186);

          gotoxy(39,12);
   printf("%c",186);
   for(i=1;i<35;i++)
       printf("%c",32);//ÈÚãá space İÇÖíÉ
          printf("%c",186);

          gotoxy(39,13);
   printf("%c",186);
   for(i=1;i<35;i++)
       printf("%c",32);//ÈÚãá space İÇÖíÉ
          printf("%c",186);

          gotoxy(39,14);
   printf("%c",186);
   for(i=1;i<35;i++)
       printf("%c",32);//ÈÚãá space İÇÖíÉ
          printf("%c",186);

          gotoxy(39,15);
   printf("%c",200);
   for(i=1;i<35;i++)
       printf("%c",205);
          printf("%c",188);
}
void ShowConsoleCursor (int showflag)//ÚÔÇä ÇÎÛì ÇáãÇæÓ ãä ÇáÇæÊÈæÊ
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showflag;
    SetConsoleCursorInfo(out, &cursorInfo);
}
