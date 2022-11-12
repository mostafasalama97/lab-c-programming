/*//Write a C program to read and print elements of array. - using recursion.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={10,20,30,40,50};
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("array element %d = %d\n",i+1,arr[i]);
    }
    return 0;
}*/
/*//Write a C program to print all negative elements in an array.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={10,-20,30,-40,50};
    int i=0;
    for(i=0;i<5;i++)
    {
        if(arr[i]<0)
        {printf("negative elment\n");
        printf("array element %d = %d\n",i+1,arr[i]);
        }else{
        printf("psitive elment\n");
                printf("array element %d = %d\n",i+1,arr[i]);

        }
    }
    return 0;
}*/
//Write a C program to find sum of all array elements. - using recursion.
/*#include <stdio.h>
#include <stdlib.h>
#define size 50
int main ()
{
    int arr[size];
    int i=0;
    int n;
    int sum=0;
    printf("enter size of array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("array element %d = ",i+1);
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++)
    {
        sum = sum + arr[i];

    }
printf("sum = %d",sum);
}*/
/*//Write a C program to find maximum and minimum element in an array. - using recursion.
#include <stdio.h>
#include <stdlib.h>
#define size 100
int main ()
{
    int arr[size];
    int i=0,n=0;
    int max=0,min=0;
    printf("enter array size ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            printf("enter element of array  %d = ",i+1);
            scanf("%d",&arr[i]);
        }
         max=arr[0];
        min=arr[0];
    for(i=0;i<n;i++)
{
    if(arr[i]>max)
        {
            max=arr[i];

        }
}
printf("max number = %d \n",max);
        for(i=0;i<n;i++){
             if(arr[i]<min)
        {
            min=arr[i];

        }
        }
 printf("min number = %d \n",min);

}*/
/*//Write a C program to count total number of even and odd elements in an array.
#include <stdio.h>
#include <stdlib.h>
#define size 100
int main ()
{
    int arr[size];
    int i=0,n=0;
    int even=0,odd=0 ,totaleven=0,totalodd=0;
    printf("enter array size ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            printf("enter element of array  %d = ",i+1);
            scanf("%d",&arr[i]);
        }
         for(i=0;i<n;i++)
         {
             if(arr[i]%2==0)
             {
                even = arr[i];
                totaleven++;
                printf("even number = %d\n" , even);
             }
         }
          printf("total even number = %d\n" , totaleven);
         for(i=0;i<n;i++)
         {


             if(arr[i]%2!=0)
             {
                odd = arr[i];
                totalodd++;
                printf("odd number = %d\n",odd);
             }
         }
         printf("total odd number = %d\n" , totalodd);
}*/
/*//Write a C program to count total number of negative elements in an array.
#include <stdio.h>
#include <stdlib.h>
#define size 100
int main ()
{
    int arr[size];
    int i=0,n=0;
    int pos=0,nega=0 ,totalpos=0,totalnega=0;
    printf("enter array size ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            printf("enter element of array  %d = ",i+1);
            scanf("%d",&arr[i]);
        }
         for(i=0;i<n;i++)
         {
             if(arr[i]>0)
             {
                pos = arr[i];
                totalpos++;
                printf("pos number = %d\n" , pos);
             }
         }
          printf("total even number = %d\n" , totalpos);
         for(i=0;i<n;i++)
         {


             if(arr[i]<0)
             {
                nega = arr[i];
                totalnega++;
                printf("odd number = %d\n",nega);
             }
         }
         printf("total odd number = %d\n" , totalnega);
}
*/
/*===========================================================================================================================
//Write a C program to copy all elements from an array to another array.
#include <stdio.h>
#include <stdlib.h>
#define size 500

int main ()
{
    int arr[size];
    int arr2[size];
    int i=0,n=0,j=0;
    printf("enter array size ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter array element %d ",i+1);
        scanf("%d",&arr[i]);
    }
       for(i=0;i<n;i++)
        {
            arr[i] = arr2[i];
        }

    for(i=0;i<n;i++)

        {
            printf("second array %d = %d \n",i+1,arr2[i]);
        }

}==================================================================================================================*/
//Write a C program to insert an element in an array.
