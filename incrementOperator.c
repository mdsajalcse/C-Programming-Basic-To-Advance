#include<stdio.h>
int main(){


   int a,x=10,b,y=20;

   a=++x;//prefix increment operator

   printf("%d\n",a);

   printf("%d\n",x);


   b=y++;//postfix increment

   printf("%d\n",b);

   printf("%d\n",y);




return 0;
}
