#include<stdio.h>
int main(){
      int daysOfNo;

      printf("Enter Number of Days= ");

      scanf("%d",&daysOfNo);

      switch(daysOfNo){

    case 1:
      printf("Sunday");
      break;

    case 2:
      printf("Monday");
      break;

    case 3:
      printf("Tuesday");
      break;

    case 4:
      printf("Wednesday");
      break;

    case 5:
      printf("Thursday");
      break;

    case 6:
      printf("Friday");
      break;

    case 7:
      printf("Sunday");
      break;

    default:
      printf("Invalid Day!!");

      }

return 0;
}
