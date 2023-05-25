#include<stdio.h>

int main(){


   double FahrenheitTemp,CentigradeTemp;

   printf("Enter Centigrade Temp= ");
   scanf("%lf",&CentigradeTemp);

   FahrenheitTemp=(CentigradeTemp*9/5)+32;

   printf(" Temperature = %.2lf",FahrenheitTemp);

   return 0;


}
