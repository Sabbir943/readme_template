#include<stdio.h>
int maximum (int x[])
{
    int i;
    int max=x[0];
    for(i=1;i<5;i++)
    {
        if(max<x[i])
        max=x[i];
        
    }
    return max;
    
}
    
    

int main()
{
    int Num[]={12,45,67,89,45};
    int maximumvalue=maximum(Num);
    printf("The maximum value is:%d\n",maximumvalue);
    
}