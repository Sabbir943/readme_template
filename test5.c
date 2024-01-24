//square a function
#include<stdio.h>
int square(int a)
{
    printf("Result:%d",a*a);
}
int main()
{
    int num;
    printf("Enter num:");
    scanf("%d",&num);
    int result=square(num);

}

