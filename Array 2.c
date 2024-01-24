//maximum and minimum in one program :
#include<stdio.h>

int main()
{
    int num[100],n,i,j;
    printf("enter how many numbers you want to put : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int max=num[0];
    int min=num[n-1];
    for(i=1,j=n-2;i<n,j>=0;i++,j--)
    {
        if(max<num[i])
            max=num[i];
        if(min>num[j])
            min=num[j];
    }
    printf("minimum is %d\n",min);
    printf("maximum is %d\n",max);

}
