#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("Enter Any number:");
    scanf("%d",&num);
    if(num<=1)
    {
        count=1;
    }
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("%d is a prime Number\n",num);
    }
    else
    {
       printf("%d is not a prime Number\n",num);
    }

}
