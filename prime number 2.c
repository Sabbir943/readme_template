#include<stdio.h>
int main()
{
    int num,i,count=0;
    for(num=1;num<=100;num++)

        {
            count=0;
    if(num<=1)
    {
        count=1;
    }
    else{
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count=1;
            break;
        }
    }

        }
    if(count==0)
    {
       // printf("prime number: ");
        printf("%d ",num);
    }
}


}

