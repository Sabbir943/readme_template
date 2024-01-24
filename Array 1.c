//display the sum and average using in array.
#include<stdio.h>
int main()
{
    int i,n,array[100],sum=0;
    float avg;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+array[i];
        avg=sum/2;
    }
    printf("The sum is:%d\n",sum);
    printf("The avg is:%.2f\n",avg);
    getch();
}
