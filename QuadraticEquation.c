//Quadratic Equation
#include<stdio.h>
int main(){

     double x1,x2,b,a,c,d;

     printf("Enter the Value of a , b ,c :");
     scanf("%lf %lf %lf",&a,&b,&c);
     d=sqrt(b*b-4*a*c);
     x1=(-b+d)/(2*a);
      x2=(-b-d)/(2*a);

      printf("Value of X1= %.2lf\n",x1);
       printf("Value of X2= %.2lf",x2);

return 0;

}


