#include<stdio.h>
int main()
{
 int A[10][10],transpose[10][10] ,i,j,r1,c1;
 printf("Enter r1 and c1:");
 scanf("%d %d",&r1,&c1);
 printf("Enter A Matrix:\n");
 for(i=0;i<r1;i++)
 {
     for(j=0;j<c1;j++)
     {
         printf("A[%d][%d]= ",i,j);
         scanf("%d",&A[i][j]);
     }
     printf("\n");
 }
 printf( "A Matrix:\n");
 for(i=0;i<r1;i++)
 {
     for(j=0;j<c1;j++)
     {
         printf("\t");
        printf("%d ",A[i][j]);
     }
     printf("\n");
 }




 for(i=0;i<r1;i++)
 {
     for(j=0;j<c1;j++)
     {
         transpose[j][i]=A[i][j];
     }
     printf("\n");
 }

   printf("\nTranspose Matrix:\n\n");
   for(i=0;i<r1;i++)
   {
       for(j=0;j<c1;j++)
       {
           printf("\t");
           printf("%d ",transpose[i][j]);
       }
       printf("\n");
   }

}
