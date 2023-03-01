#include<stdio.h>
int swap(int *x,int *y){
int temp= *x;
*x = *y;
*y = temp;
return 0;
}
int main(){
    int a,b;
    printf("Please enter the values of a and b:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("The values of a and b after swapping is: %d %d",a,b);
return 0;
}
