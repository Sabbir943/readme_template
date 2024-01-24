#include<stdio.h>
int main()
{
    int i,A[10][10],row,col,j;
    printf("Enter row & col:");
    scanf("%d %d",&row,&col);
    printf("Enter element for A matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
printf("A[%d][%d]= ",i,j);
scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("\nA matrix:\n");
   for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t");
printf("%d ",A[i][j]);

        }
        printf("\n");
    } 

}