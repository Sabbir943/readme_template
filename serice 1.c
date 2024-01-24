#include<stdio.h>
int main()
{
 int sum=0,i,n;
 printf("Enter last digit of serice:");
 scanf("%d",&n);
 printf("1+2+3+.....+%d",n);
 for(i=1;i<=n;i=i+1)
 {
     sum=sum+i;
 }
 printf("=%d\n",sum);
 printf("1+3+5+.....+%d",n);
 for(i=1;i<=n;i=i+2)
 {
     sum=sum+i;
 }
 printf("=%d\n",sum);









}
