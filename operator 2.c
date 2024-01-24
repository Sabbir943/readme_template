#include<stdio.h>
int main()
{
 float base,height,area,pi;
 printf("Enter base:");
 scanf("%f",&base);
 printf("Enter height:");
 scanf("%f",&height) ;
 area=(0.5*base*height);
 printf("Area of Triangle:%.2f\n",area);
 float rad;
 printf("Enter radious:");
 scanf("%f",&rad);
 pi=3.14;
 area=pi*rad*rad;
 printf("Area of circle:%.2f\n",area);
 float breath;
 printf("Enter breath:");
 scanf("%f",&breath);
 printf("Enter base:");
 scanf("%f",&base);
 area=(base*breath);
 printf("Area of ractangular:%.2f\n",area);
 //double a,b,c,s,Area;
 //printf("Enter A B C:");
 ////scanf("%lf %lf %lf",&a,&b,&c) ;
 //s=a+b+c/2;
 //Area=sqrt(s(s-a)*(s-b)*(s-c));
 //printf("Area of another triangle:%f\n",area);



}
