// C Program to count number of Alphabets & number of words in a sentence. (word count)
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c =0;
    int countalpha =0 , countword=0;
    printf("enter your sentance\n");
    do{
        c=getche();
        if((c ==' '&& countalpha >0 )|| (c == 13 &&countalpha >0)){
            countword++;
        }
        else if ((c >='a' && c <='z') ||(c>='A'&&c<='Z') )
        {
            countalpha++;
        }

    }while(c!=13);
    printf("\ ntotal of alphapet : %d \ntotal of wordscount : %d",countalpha,countword);

    return 0;
}
