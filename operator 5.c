//c=(f-32)/1.8
#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter farnheight:");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("The centigrade is:%.2f\n",c);
    getch();
}
