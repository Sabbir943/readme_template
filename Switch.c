#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any Latter:");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'A':
    case' E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("vowle\n");
        break;
    default:
        printf("Consonant\n");


    }



}

