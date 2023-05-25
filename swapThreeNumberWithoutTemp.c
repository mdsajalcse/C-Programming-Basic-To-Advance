#include<stdio.h>
int main(){

     int num1=40,num2=50,num3=10;
      printf("Number One Before Swap =%d\n",num1);
      printf("Number Two Before Swap =%d\n",num2);
       printf("Number Three Before Swap =%d\n",num3);

     num3=num2-num1;
     num1=num3;
     num3=num2-num1;
     num2=num3;
     num3=num1+num2;


     printf("Number One After Swap =%d\n",num1);
      printf("Number Two After Swap =%d\n",num2);
       printf("Number Three After Swap =%d\n",num3);


return 0;

}
