#include<stdio.h>
int main()
{
 int A[3][4]={{2,3,4,5},{5,6,7,5},{4,3,2,6}};
 int i,j;
 for(i=0;i<3;i++)
 {
     for(j=0;j<4;j++)
     {
         printf("%d ",A[i][j]);
     }
     printf("\n");
 }



}
