//sum of diagonal:
#include<stdio.h>
int main()
{
    int A[10][10],i,j,col,row,sum=0;
    printf("Enter Element for A matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
   printf("A Matrix:\n\n") ;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("\t");
           printf("%d ",A[i][j]);
       }
       printf("\n");
   }
   printf("Show the diagonal Element:");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           if(i==j)
           {
              printf("%d ",A[i][j]);
              sum=sum+A[i][j];
           }
       }

   }
   printf("\nsum of diagonal matrix: %d\n\n",sum);





}
