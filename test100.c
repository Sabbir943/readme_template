#include<stdio.h>
float sum(float b,float h)
{
    float area=0.5*b*h;
    printf("Area of trigle:%.2f",area);
}
int main()
{
    float base ,height;
    printf("Enter base:");
    scanf("%f",&base);
    printf("Enter heigth:");
    scanf("%f",&height);
    float area= sum(base,height);
}