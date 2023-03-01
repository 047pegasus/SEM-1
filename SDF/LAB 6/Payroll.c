#include<stdio.h>
int main(){
int hrs=0,r=500,sal=0;
printf("Enter the number of hours candidate works:");
scanf("%d",&hrs);
if(hrs<6 && hrs>0){
        sal=hrs*r;
    printf("Salary of candidate in dollars is: %d",sal);
}
else if(hrs>6 && hrs<9){
        sal=hrs*r;
    printf("Salary of candidate in dollars is: %d",sal);
}
else if(hrs>9){
    printf("YOU NEED SOME REST BOY!!");
}
return 0;
}
