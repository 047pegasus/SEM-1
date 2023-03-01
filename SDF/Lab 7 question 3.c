#include<stdio.h>
int main(){
    int num,rem,sum=0;
    printf("Enter a three digit number:");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("The sum of the three digits is:");
    printf("%d",sum);
return 0;
}
