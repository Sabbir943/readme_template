#include<stdio.h>
int main()
{
 double num1,num2;
 char op;
 printf("Enter operator:");
 scanf("%c",&op);
 printf("Enter num1 and num2:");
 scanf("%lf %lf",&num1,&num2);
 switch(op)
 {
 case '+':
    {
        printf("%.2lf+%.2lf=%.2lf",num1,num2,num1+num2);
        break;
    }
   case '-':
    {
        printf("%.2lf-%.2lf=%.2lf",num1,num2,num1-num2);
        break;
    }

    case '*':
    {
        printf("%.2lf*%.2lf=%.2lf",num1,num2,num1*num2);
        break;
    }

    case '/':
    {
        printf("%.2lf/%.2lf=%.2lf",num1,num2,num1/num2);
        break;
    }
    default :
        printf("Wrong number");






 }
 getch();



}
