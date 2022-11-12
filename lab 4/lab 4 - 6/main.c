#include <stdio.h>
#include <stdlib.h>


int main() {
     char str[100];
     int i=0;
    printf("Enter a sentence: \n");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; ++i);
       printf("\nLength of input sentence: %d",i);
    return 0;
}
