#include<stdio.h>
float sum(float a,float b,float c)
{
printf("The result is:%f\n",a+b+c);
}

int main()
{
float num1,num2,num3;
printf("Enter 3 number:");
scanf("%f %f %f",&num1,&num2,&num3);
sum(num1,num2,num3); 
    
}