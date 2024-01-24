#include<stdio.h>
int main()
{
 int A[10][10],B[10][10],C[10][10],i,j,k,r1,r2,c1,c2,sum=0;
 printf("Enter r1 and c1 for A matrix:");
 scanf("%d %d",&r1,&c1);
 printf("Enter r2 and c2 for B matrix:");
 scanf("%d %d",&r2,&c2);
 while(c1!=r2)
 {
     printf("Error!!\n\n");
     printf("Enter r1 and c1 for A matrix:");
     scanf("%d %d",&r1,&c1);
     printf("Enter r2 and c2 for B matrix:");
     scanf("%d %d",&r2,&c2);

 }
 //scanning A matrix:
 printf("Enter Element for A matrix:\n ");
 for(i=0;i<r1;i++)
 {
     for(j=0;j<c1;j++)
     {
         printf("A[%d][%d]= ",i,j);
         scanf("%d",&A[i][j]);
     }
     printf("\n");
 }

  //scanning B matrix:
 printf("Enter Element for B matrix:\n ");
 for(i=0;i<r2;i++)
 {
     for(j=0;j<c2;j++)
     {
         printf("B[%d][%d]= ",i,j);
         scanf("%d",&B[i][j]);
     }
     printf("\n");
 }
  //printing  A matrix:
 printf("A matrix:\n ");
 for(i=0;i<r1;i++)
 {
     for(j=0;j<c1;j++)
     {
         printf("\t");
         printf("%d ",A[i][j]);

     }
     printf("\n");
 }

  //printing  B matrix:
 printf("B matrix:\n ");
 for(i=0;i<r2;i++)
 {
     for(j=0;j<c2;j++)
     {
         printf("\t");
         printf("%d ",B[i][j]);

     }
     printf("\n");
 }


  for(i=0;i<r1;i++)
  {
      for(j=0;j<c2;j++)
      {
          for(k=0;k<c1;k++)
          {
              sum=sum+A[i][j]*B[k][j];
          }
          C[i][j]=sum;
          sum=0;
      }
  }
  printf("Show the Multipulated result:\n\n");

  //printing  C matrix:
 printf("C matrix:\n ");
 for(i=0;i<r1;i++)
 {
     for(j=0;j<c1;j++)
     {
         printf("\t");
         printf("%d ",C[i][j]);

     }
     printf("\n");
 }
}
