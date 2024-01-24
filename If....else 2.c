#include<stdio.h>
int main()
{
 int num1,num2;
 printf("Enter two numbers:\n") ;
 scanf("%d %d",&num1,&num2);
 if(num1>num2)
 {
     printf("First Number is a Large Number:%d\n",num1);
     printf("second Number is a small Number:%d\n",num2);
 }
 else if(num2>num1)
 {
  printf("second Number is a Large Number:%d\n",num2);
  printf("First Number is a small Number:%d\n",num1);
 }
 else
    printf("They are equal");


}
