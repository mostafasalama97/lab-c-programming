#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    char chara =0;
    int countalpha =0 , countword=0;
    printf("enter your sentance \n");
    do{
        chara=getchar();
        if((chara ==' '&& countalpha >0 )|| (chara == 13 &&countalpha >0)){
            countword++;
        }
        else if ((chara >='a' && chara <='z') ||(chara>='A'&&chara<='Z') )
        {
            countalpha++;
        }

    }while(chara!=13);
    printf("\ntotal of alpha : %d \ntotal of words : %d",countalpha,countword);

    return 0;
}
