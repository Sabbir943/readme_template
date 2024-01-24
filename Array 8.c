#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int row,col,i,j;
    printf("Enter row and col:");
    scanf("%d %d",&row,&col);
    //scanning A matrix:
    printf("\nEnter A matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //scanning B matrix:
    printf("\nEnter B matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    //printing A matrix:
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
    //printnig B matrix:
    printf("\nB matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t");
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
        printf("\n");
    }
    //Adding A+B  matrix:
    printf("\n A+B matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t");
            printf("%d ",C[i][j]);

        }
        printf("\n");
    }



}
