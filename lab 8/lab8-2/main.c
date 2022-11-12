#include <stdio.h>
#include <stdlib.h>
#include"emp_menu.h"
#define max 10
int main()
{
    int size=0,i=0;
    char click =0,line=1,flag =0;
    printf("how many employee ?");
    scanf("%d",&size);
    emp * ptr [max];
    for(i=0;i<size;i++){
        ptr[i]=(emp *) malloc(sizeof(emp));
    }
    while (flag!=2){

        menu(line);
        click=getch();

        if(click==-32){
           click=getch();
           switch(click){
            case 72:
                line--;
                if(line==0){
                    line=3;
                }
                break ;
            case 80:
                line++;
                if(line==4){
                    line=1;
                }
           }
        }
        else if (click==13){
            switch (line){
                case 1:
                    if(flag==0){
                   emplyee(ptr,size);
                   flag=1;
                    }
                    break ;
                case 2:
                   diplay(ptr,size);
                   break;
                case 3:
                    flag=2;
                    break;

            }

        }

    }
    return 0;
}
