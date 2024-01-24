//upper ans lower triangle of diagonal:
#include<stdio.h>
int main()
{
    int A[10][10],i,j,col,row,lowersum=0,uppersum=0;
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

   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
          if(i<j)
           {

              uppersum=uppersum+A[i][j];
           }

          if(i>j)
           {

              lowersum=lowersum+A[i][j];
           }
       }

   }
   printf("\nupper triangle sum of diagonal matrix: %d\n\n",uppersum);
   printf("\nlower triangle sum of diagonal matrix: %d\n\n",lowersum);





}

