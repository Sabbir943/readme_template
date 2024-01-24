#include<stdio.h>
int main()
{
    double x=4.56;
    double result1=round(x);
    printf("round(%lf)= %lf\n",x,result1);

    double result2=ceil(x);
    printf("Ceil(%lf)= %lf\n",x,result2);

    double result3=trunc(x);
    printf("Trunc(%lf)= %lf\n",x,result3);
    double result4=floor(x);
    printf("floor(%lf)= %lf\n",x,result4);


}
