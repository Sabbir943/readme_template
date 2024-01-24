#include<stdio.h>
int main()
{
int A[2][2];
int i,j;
//scanning for A matrix:
printf("Enter A matrix:\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("A[%d][%d]= ",i,j);
        scanf("%d",&A[i][j]);
    }
    printf("\n");
}
 printf("\nA matrix=\n");
 for(i=0;i<2;i++)
 {
     for(j=0;j<2;j++)
     {
         printf("\t");
         printf("%d",A[i][j]);
     }
     printf("\n");
 }
  //scanning for B matrix
  int B[2][2];
printf("Enter B matrix:\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("B[%d][%d]= ",i,j);
        scanf("%d",&B[i][j]);
    }
    printf("\n");
}
 printf("\nB matrix=\n");
 for(i=0;i<2;i++)
 {
     for(j=0;j<2;j++)
     {
         printf("\t");
         printf("%d",B[i][j]);
     }
     printf("\n");
 }

}
