#include<stdio.h>
int main(){
    int n,sum,i=0;
    printf("Enter the number you want to check for perfection:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
        sum=sum+i;
        }
        else{
        }
}
    if(sum==n){
        printf("Given no is perfect");
    }
    else{
        printf("Given number is not perfect");
    }
return 0;
}
