#include<stdio.h>
int fact(int x){
int i=1,result=1;
for(i=1;i<=x;i++){
    result=i*result;
}
return result;
}
int main(){
    int n;
    printf("Enter the no for which factorial is to be calculated:");
    scanf("%d",&n);
    int r=fact(n);
    printf("\n The factorial of given number is:%d", r);
return 0;
}
