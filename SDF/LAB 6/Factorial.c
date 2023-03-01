#include<stdio.h>
int main(){
int num;
int i,fact=1;
printf("Enter a number to find factorial of:");
scanf("%d",&num);
for(i=1;i<=num;i++){
    fact=fact*i;
}
printf("The factorial of this number is:");
printf("%d",fact);
return 0;
}
