#include<stdio.h>
int main(){
    int y=0;
    float result=0;
    float x=0;
    printf("Enter the value of x(real number):");
    scanf("%f",&x);
    printf("Enter the value of y(integer):");
    scanf("%d",&y);
    int div=(x/y);
    result=(x*x)+(y*x)-div;
    printf("%f",result);
return 0;
}
