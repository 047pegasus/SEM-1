#include<stdio.h>
int main(){
int n,rem,sum=0;
printf("Enter a number to find sum of its digits:");
scanf("%d",&n);
while(n!=0){
rem=n%10;
sum=sum+rem;
n=n/10;
}
printf("The sum of given number's digits is:");
printf("%d",sum);
return 0;
}
