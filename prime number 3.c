#include <stdio.h>

int main() {
    // Write C code here


   int number,i,n1=0,n2=0,count=0,n;
   printf("Enter n:");
   scanf("%d",&n);


   for(number=1;number<=n;number++)
   {
    count=0;
    if(number<=1)
    {
        count=1;
    }
    else
    {
        for(i=2;i<number;i++)
        {
            if(number%i==0)
            {
                count=1;
                break;
            }
        }
    }
    if(count==0)

    {
        printf("%d ",number);
        n1++;
        n2=n2+number;
    }
   }
     printf("\nTotal prime number:%d\n",n1);
     printf("sum of prime number:%d\n",n2);

    return 0;
}
