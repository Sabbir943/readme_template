#include<stdio.h>
void calculatepower(float base,float exp)
{
    float result=1,i;
    for(i=1;i<=exp;i++)
    {
        result =result*base;
    }
    printf("Result:%.1f\n",result);
}
int main()
{
   float base,exp;
   printf("Enter base and exceptional:");
   scanf("%f %f",&base,&exp);
   calculatepower(base,exp); 
}