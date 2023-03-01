#include<stdio.h>
int calc(int a,int b){
int sum=a+b;
int dif=a-b;
int prod=a*b;
int div=a/b;
int ch;
printf("Enter operation as:\n");
printf("1. ADDITION \n 2.SUBSTRACTION \n 3.MULTIPLICATION \n 4.DIVISION\n");
scanf("%d",&ch);
switch(ch){
    case 1: return sum;
            break;
    case 2: return dif;
            break;
    case 3: return prod;
            break;
    case 4: return div;
            break;
    default: printf("Enter correct character..");
}
}
int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
int res=calc(x,y);
printf("The result of given operation on given numbers is:%d",res);
return 0;
}
