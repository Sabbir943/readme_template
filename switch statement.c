#include<stdio.h>
int main()
{
 int choice;
 float Temp,convertedTemp;
 printf("Temperature convertaur menu:\n");
 printf("1.Fahrenheit to celcious :\n") ;
 printf("2.celcious to Fahrenheith :\n") ;
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
      {
       printf("Enter Fahrenheit Temperature:\n") ;
       scanf("%f",&Temp);
       convertedTemp=(Temp-32)/1.8;
       printf("The celcious result is=%.2f\n",convertedTemp);
       break;


      }
  case 2:
    {

      printf("Enter celcious Temperature:\n") ;
       scanf("%f",&Temp);
       convertedTemp=(Temp*1.8)+32;
       printf("The Fahrenhrit result is=%.2f\n",convertedTemp);
       break;


    }
  default :
    printf("Not vaild number:\n");


 }
 getch();

}
