#include<stdio.h>
float area(float a,float b)
{
    printf("Area of Triangle:%.2f\n",0.5*a*b);
}
int main()
{
    float base,heigth;
    printf("Enter base and heigth:");
    scanf("%f %f",&base,&heigth);
    float result=area(base,heigth);
}