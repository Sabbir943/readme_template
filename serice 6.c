#include<stdio.h>
int main()
{
 int i,n,sum;
 printf("Enter any n:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     printf("%d ",i);
     sum=sum+i;
 }
 printf("\nTotal sum:%d\n",sum);
 getch();



}
