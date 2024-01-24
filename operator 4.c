//F=(c*1.8)+32
#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter centigrade:");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("Farnheight:%.2f\n",f);
    getch();
}
