#include<stdio.h>
int gcd(int x,int y){
int i=1;
int g;
for(i=1;i<=x && i<=y;i++){
    if(x%i==0 && y%i==0){
        g=i;
     }
}
//printf("%d",g);
return g;
}
int main(){
int a,b,res;
printf("Enter the values of a and b:");
scanf("%d %d",&a,&b);
res=gcd(a,b);
printf("The greatest common divisor of a and b is: %d",res);
return 0;
}
