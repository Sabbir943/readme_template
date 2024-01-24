#include<stdio.h>
int main()
{
 char ch;
 printf("Enter Any Character:");
 scanf("%c",&ch);
 if(ch>='a' && ch<='z')
        printf("Small Latter!");
 else if(ch>='A' && ch<='Z')
    printf("Capital Latter!");
 else
    printf("Not A Latter!");


}
