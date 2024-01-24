//using function and calculate square.
#include<stdio.h>
int square( int a)
{
    return a*a;
}
int main()
{
    int num;
    printf("Enter num:");
    scanf("%d",&num);
    int result=square(num);
    printf("Result:%d\n",result);

}