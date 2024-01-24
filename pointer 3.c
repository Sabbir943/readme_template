#include<stdio.h>
int main()
{
  int x=45,y=89,sum;
  int *ptr1,*ptr2;
  ptr1=&x;
  ptr2=&y;
  sum=*ptr1+*ptr2;
  printf("Result:%d",sum);



}
