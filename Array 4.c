//Linear search
#include<stdio.h>
int main()
{
    int a[]={2,3,4,5,6,7,89,34,5,6};
    int value,pos=-1,i;
    printf("Enter input do you search:");
    scanf("%d",&value);
    for(i=0;i<11;i++)
    {
        if(value==a[i])
        {
            pos=i+1;
            break;

        }
    }
    if(pos==-1)
    {
        printf("Error!");
    }
    else
    {
        printf("The position at:%d\n",pos);
    }
}
