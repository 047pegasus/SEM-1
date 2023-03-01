#include<stdio.h>
int main(){
int a,b,c;
printf("Enter three numbers:");
scanf("%d""%d""%d",&a,&b,&c);
if(a>b && a>c){
    printf("%d","The largest number is:",a);
}
else if(b>a && b>c){
    printf("%d","The largest number is:",b);
}
else{
        printf("%d","The largest number is:",c);
}
return 0;
}
