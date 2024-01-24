#include<stdio.h>
int main()
{
  int num1,num2,num3;
  printf("Enter two number:");
  scanf("%d %d",&num1,&num2);
  num3=num1&num2;
  printf("%d \n",num3) ;
    num3=num1|num2;
  printf("%d \n",num3) ;
   num3=num1^num2;
  printf("%d \n",num3) ;
  getch();

}
