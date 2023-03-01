#include<stdio.h>
int main(){
    int x,y,q,rem=0;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    q=(x/y);
    rem=(x%y);
    printf("%d",q);
    printf("%d",rem);
return 0;
}
