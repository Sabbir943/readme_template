#include<stdio.h>
int main()
{
    int x=23,y=45,z=56;
    int *ptr;
    ptr=&x;
    printf("x=%d\n",*ptr);
    ptr=&y;
    printf("y=%d\n",*ptr);
    ptr=&z;
    printf("z=%d\n",*ptr);




}
