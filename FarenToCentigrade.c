#include<stdio.h>

int main(){


   double FahrenheitTemp,CentigradeTemp;

   printf("Enter Fahrenheit Data= ");
   scanf("%lf",&FahrenheitTemp);

   CentigradeTemp=(FahrenheitTemp-32)*5/9;



   printf("Centigrade Temperature = %.2lf",CentigradeTemp);

   return 0;


}
