#include<stdio.h>
int main()
{
    int num;
    printf("Enter an Integer:");
    scanf("%d",&num);
    if(num%2==0)
        printf("even\n");
    else
        printf("odd\n");
}
