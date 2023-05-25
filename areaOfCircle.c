#include<stdio.h>
#include<math.h>
int main(){


   double radius,areaOfCircle;

   printf("Enter Radius Of Circle= ");
   scanf("%lf",&radius);
   areaOfCircle=M_PI*radius*radius;
   printf("Area Of Circle is= %.2lf",areaOfCircle);

   return 0;


}
