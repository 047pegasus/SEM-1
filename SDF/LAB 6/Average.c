#include<stdio.h>
int main(){
int a,b,c,avg=0;
printf("Enter the value of Number A:");
scanf("%d",&a);
printf("Enter the value of Number B:");
scanf("%d",&b);
printf("Enter the value of Number C:");
scanf("%d",&c);
avg=(a+b+c)/3;
printf("The average of three entered numbers is: %d",avg);
return 0;
}
