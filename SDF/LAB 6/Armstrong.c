#include<stdio.h>
int main(){
    int num,orig,result,rem=0;
    printf("Enter a three digit number to check for armstrong:");
    scanf("%d",&num);
    orig=num;
    while(num!=0){
        rem=num%10;
        result=result+(rem*rem*rem);
        num=num/10;
    }
    if(orig==result){
        printf("Looks Good as an Armstrong!!");
    }
    else{
        printf("Does not seem to an Armstrong number..");
    }
    return 0;
}
