//Area of triangle
//Area of ractangular
//Area of circle
#include <stdio.h>

int main()
{
    float base,heigth,area,breath,radious,pi;
    printf("Enter base and height: ");
    scanf("%f %f",&base,&heigth);
    area=(base,heigth);
    printf("Area of Triangle:%.2f\n",area);
printf("Enter breath and height: ");
scanf("%f %f",&breath,&heigth);
area=breath*heigth;
printf("Area of ractangular:%.2f\n",area);
printf("Enter radious: ");
scanf("%f",&radious);
pi=3.1416;
area=pi*radious*radious;
printf("Area of circle:%.2f\n",area);

}