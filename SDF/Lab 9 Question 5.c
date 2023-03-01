#include<stdio.h>
int main(){
    int a,b,c=0;
    int d=0;
    int r1,r2,r;
printf("The form of quadratic equation is ax^2+bx+c=0\n");
printf("Please enter the value of a:");
scanf("%d",&a);
printf("Please enter the value of b:");
scanf("%d\n",&b);
printf("Please enter the value of c:");
scanf("%d\n",&c);
d=(b*b)-(4*a*c);
r=(d^1/2);
switch(d){
case 0 : if(d=0){
             r1= (-b)/(2*a);
             r2= (-b)/(2*a);
             printf("Roots are real and equal and they are:");
             printf("%d%d",r1,r2);
             }
             break;
case 1: switch(d>0){
           case 1: if(d>0){
             r1= (-b + r) / (2*a);
             r2= (-b - r)/ (2*a);
             printf("Roots are real and they are:");
             printf("%d%d",r1,r2);
             }
             break;
           }

           case 2: if(d<0){
             r1=(-b + r) / (2*a);
             r2= (-b - r)/ (2*a);
             printf("Roots are complex and they are:");
             printf("%d%d",r1,r2);
             }
             break;
 deafault: printf("Please enter the correct values.");
           break;

}
return 0;
}


