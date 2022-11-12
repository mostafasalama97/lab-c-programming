#include <stdio.h>
#include <stdlib.h>
int sum (int degree);
int main()
{
   int rows=0,cols=0, ** ptr,i=0,j=0,flag=1,c=0;
   float result=0;
   char click=0;
   printf(" number of students = ");
   scanf("%d",&rows);
   ptr=(int **) malloc (rows*sizeof(int));
   printf(" number of subjects = ");
   scanf("%d",&cols);
   cols++;
   for (i=0;i<cols;i++)
    {
        ptr[i]=(int *) malloc (sizeof(int));
   }
   system("cls");
   for(i=0;i<rows;i++){
        printf(" student %d id = ",i+1);
        scanf("%d",ptr[i]+0);
        for(j=1;j<cols;j++){
            printf(" degree of subject %d = ",j);
            scanf("%d",ptr[i]+j);
        }
   }



   while(click!= 27){
           i=0;
           result=0;
           system("cls");
           printf("if want to \n1-calculate degree summition for student click S\n2-calculate average of degree for a subject click G");
           click =getch();
           switch(click){
           case 115:
           case 83:
               system("cls");
               printf("\nenter student number :");
               scanf("%d",&c);
               flag=1;
                while(flag!=0){
                    if(ptr[i][0]== c || i==rows){
                        flag=0;
                    }
                    else{
                        i++;
                    }
                }
                if(i==rows){
                    break;
                }
                else {
                    for(j=1;j<cols;j++){
                        result+=ptr[i][j];

                    }
                     printf("the summition of degrees of student %d = %.2f ",c,result);

                }

                break;
         case 71:
         case 103:
               system("cls");
               printf("enter subject number :");
               scanf("%d",&c);
               if(c>=1&&c<=cols){
                    result=0;
                    for(j=0;j<rows;j++){
                           result+=ptr[j][c];
                        }
                        result /=rows;
                        printf("the Average of subject %d = %.2f ",c,result);

                    break;

           }
   }

}
}
