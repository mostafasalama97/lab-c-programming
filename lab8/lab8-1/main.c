#include <stdio.h>
#include <stdlib.h>
#define size 4

int * IncrementArray1();
int * IncrementArray3();

typedef struct array{
    int arr[size];

}array;
array IncrementArray2();
int main()
{
     int * ptr=IncrementArray1(),i=0;
     for(i=0;i<size;i++){
     printf("%d\n",ptr[i]);
     }
     array arr2=IncrementArray2();
     for(i=0;i<size;i++){
     printf("%d\n",arr2.arr[i]);
     }
     ptr=IncrementArray3(size);
     for(i=0;i<size;i++){
     printf("%d\n",ptr[i]);
     }

     return 0;

}
array IncrementArray2(){

   array arr2={1,2,3,4};
   return arr2;


}
int* IncrementArray1(){

   static int arr1[]={1,2,3,4};
   return arr1;


}


int * IncrementArray3(int size){
    int i=0;
    int *ptr=(int *) malloc(4*sizeof(int));
    for(i=0;i<size;i++){
        ptr[i]=i+1;
     }

    return ptr;


}
