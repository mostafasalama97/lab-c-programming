#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //���� ���� �� operating system
void draw_box();
void ShowConsoleCursor (int showflag);

void AddNewEmployee();
void DisplayEmployee();

typedef struct Employee
{
    int id ;
    float salary;
    char name[50];
} Employee;
Employee emp_array[25];


void main(void)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);//������ ���� ���� ��� ������ ������� ��� ���� �� ��������
    int pos=0;
    char ch;
    //int ch;
    /*���� ��� ��� == ����� 205
    ���� ��� ��� ������ ������ ���� 201
    */

    /*for(ch=0;ch<=255;ch++) //����� �� ������� ��� ������ ���� �� �� c
        printf("%d %c in",ch,ch);*/
        draw_box();
        ShowConsoleCursor(0);
        pos=1;
        do{

        SetConsoleTextAttribute(console,15);//��� ��� ���� ���� ��� ������� ������ ���� ����� ���� ����� �� ���� ���� ���� ����
                gotoxy(40,11);
                printf("1- add new employee");
                gotoxy(40,12);
                printf("2- display employee");
                gotoxy(40,13);
                printf("3- delete existing employee");
                gotoxy(40,14);
                printf("4- exit");



        switch(pos)
        {
        case 1:
                SetConsoleTextAttribute(console,240);//���� ��� ������� �� ��������
                gotoxy(40,11);
                printf("1- add new employee");
            break;

            case 2:
                    SetConsoleTextAttribute(console,240);//���� ��� ������� �� ��������
                    gotoxy(40,12);
                    printf("2- display employee");
            break;

            case 3:
                    SetConsoleTextAttribute(console,240);//���� ��� ������� �� ��������
                    gotoxy(40,13);
                    printf("3- delete existing employee");

            break;

            case 4:
                    SetConsoleTextAttribute(console,240);//���� ��� ������� �� ��������
                    gotoxy(40,14);
                    printf("4- exit");
            break;
        }
        ch=getch();
                if(ch==-32)
                ch=getch();
                if(ch==72)//��� ����
                {
                    pos --;
                    if(pos==0)
                        pos=4;
                }
                else if(ch==80)//��� ����
                {
                    pos ++;
                 if(pos==5)
                        pos=1;
                }


    }while(ch!=13);

    switch(pos)
        {
        case 1:
                SetConsoleTextAttribute(console,240);//���� ��� ������� �� ��������
                gotoxy(45,17);

                AddNewEmployee();
            break;

            case 2:
                    SetConsoleTextAttribute(console,240);//���� ��� ������� �� ��������
                    gotoxy(40,12);
                  DisplayEmployee();
            break;
        }

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
void draw_box()//���� ���� ������
{
    int i;//�� ������ ���� ���� ���� ����� �� ���
   gotoxy(39,10);
   printf("%c",201);
   for(i=1;i<35;i++)
       printf("%c",205);
          printf("%c",187);
   gotoxy(39,11);
   printf("%c",186);
   for(i=1;i<35;i++)
       printf("%c",32);//���� space �����
          printf("%c",186);

          gotoxy(39,12);
   printf("%c",186);
   for(i=1;i<35;i++)
       printf("%c",32);//���� space �����
          printf("%c",186);

          gotoxy(39,13);
   printf("%c",186);
   for(i=1;i<35;i++)
       printf("%c",32);//���� space �����
          printf("%c",186);

          gotoxy(39,14);
   printf("%c",186);
   for(i=1;i<35;i++)
       printf("%c",32);//���� space �����
          printf("%c",186);

          gotoxy(39,15);
   printf("%c",200);
   for(i=1;i<35;i++)
       printf("%c",205);
          printf("%c",188);
}
void ShowConsoleCursor (int showflag)//���� ���� ������ �� ��������
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showflag;
    SetConsoleCursorInfo(out, &cursorInfo);
}
void AddNewEmployee(int x)
{
    for (int i=0; i < 3; ++i)
    {

        printf("Employee %d data\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emp_array[i].id);
        fflush(stdin);
         printf("Employee Name: ");
        //scanf("%s", emp_array[i].name);
        gets(emp_array[i].name);
        fflush(stdin);
        printf("Employee Salary: ");
        scanf("%f", &emp_array[i].salary);
    }
}
void DisplayEmployee(int x)
{
    for (int i = 0; i < 6; ++i)
    {
        printf("Employee ID: %d\n", emp_array[i].id);
        printf("Employee Name: %s\n", emp_array[i].name);
        printf("Employee Salary: %f\n", emp_array[i].salary);

    }
}
