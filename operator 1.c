//Display the sum and Average:
#include<stdio.h>
int main()
{
    int sum,num1,num2;
    float avg;
    printf("Enter two number:");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    avg=sum/2;
    printf("sum:%d\n",sum);
    printf("Avarage:%.2f\n",avg);
}
