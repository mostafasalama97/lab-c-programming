#include <stdio.h>
#include <stdlib.h>
#define size 10
void display (int*);
int main()
{
    int arr[size] = {1,2,3,4,5,6,7,8,9,10};
    int * ptr;
    int i =0;
    for(i=0; i<size; i++){
       add(&arr[i]);

    }
    for(i=0; i<size; i++){
       display(&arr[i]);

    }

    //for(i=0; arr[10]!='\0'; ++i);
    //printf("Enter a sentence: %s \n",arr[i]);
    return 0;
}
void display(int * ptr)
{
    printf("%d\n",*ptr);
}
void add(int * ptr)
{
    scanf("%d",ptr);

}
