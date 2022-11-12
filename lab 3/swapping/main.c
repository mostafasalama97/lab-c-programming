#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

/*void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int x, y;
    printf("Enter Value of x ");
    scanf("%d", &x);
    printf("\nEnter Value of y ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}*/
void swap(int*, int*);

int main()
{
   int x, y;

   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);


   swap(&x, &y);

   printf("After Swapping\nx = %d\ny = %d\n", x, y);

   return 0;
}

void swap(int *a, int *b)
{
   int temp;

   temp = *b;
   *b = *a;
   *a = temp;
}

