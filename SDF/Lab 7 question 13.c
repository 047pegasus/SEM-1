#include<stdio.h>
int main(){
    int num,sum,f,l,i,rem,sumf=0;
    printf("Enter a four digit number:");
    scanf("%d",&num);
    for(i=1;i<=4;i++){
        if(i==1){
                f=num%10;
                rem=num%10;
        }
        else if(i==4){
            l=num%10;
        }
        else{}{
            rem=num%10;
        }
        num=num/10;
    }
    sumf=f+l;
    printf("The sum of the first and last digits of the number is:");
    printf("%d",sumf);
return 0;
}
