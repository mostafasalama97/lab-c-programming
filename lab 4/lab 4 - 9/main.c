//C Program to Remove all Characters in a String Except Alphabet
#include <stdio.h>
#include <stdlib.h>
void strprint();
int main()
{
    strprint();
    return 0;
}
void strprint(){
    char arr [10][200]={0},i=0,j=0,press=0;
    do{
        i=0;
        system("cls");
        printf("enter  string to print it after press enter : \n");
        do{
            press=getche();
            if(press==-32){
                press=getche();
                arr[j][i]=press;
            }
            else if(press==13){
                arr[j][i]='\0';
            }
            else{
                arr[j][i]=press;
                i++;
            }
        }while(press!=13);
        system("cls");

        printf("your string :\n%s ",arr[j]);
        printf("\n enter new string enter any key \n exit press esc");
        press=getche();
        j++;
    }while(press!=27);
    system("cls");


}
