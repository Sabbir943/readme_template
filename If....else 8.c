#include<stdio.h>
int main()
{
    int digit;
    printf("Enter digit:");
    scanf("%d",&digit);
    switch(digit)
    {


case 0:
    printf("zero\n");
    break;

case 1:
    printf("one\n");
    break;

case 2:
    printf("Two\n");
    break;

case 3:
    printf("Three\n");
    break;

case 4:
    printf("Four\n");
    break;

case 5:
    printf("Five\n");
    break;
case 6:
    printf("Six\n");
    break;

case 7:
    printf("seven\n");
    break;
default:
    printf("Not a vaild number:");

    }
    getch();


}
