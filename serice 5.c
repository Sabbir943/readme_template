//1.5+2.5+3.5+4.5+....
#include<stdio.h>

int main()
{
    float n,i,sum=0;
    printf("Enter any n:");
    scanf("%f",&n);
    for(i=1.5;i<=n;i++)
    {
        printf("%.2f ",i);
        sum=sum+i;
    }
    printf("\nTotal sum:%.2f\n",sum);
}
