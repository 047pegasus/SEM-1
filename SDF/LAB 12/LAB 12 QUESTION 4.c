#include<stdio.h>
int div(int x,int y){
    int count=1;
while(x>y){
    x=x-y;
    count++;
}
return count;
}
int main(){
int a,b;
printf("Enter values of a and b:");
scanf("%d %d",&a,&b);
int d=div(a,b);
printf("The division result is: %d",d);
return 0;
}
