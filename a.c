//array using in function
#include<stdio.h>
void display(int x[])
{
    int i;
    for (i=0;i<=4;i++)
    {
        printf("%d ",x[i]);
    }
}
int main()
{
    int num[]={12,45,2,67,45,7};
    display (num);
}