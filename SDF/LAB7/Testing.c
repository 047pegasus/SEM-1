#include<stdio.h>
int main(){
    int a=10,b=20;
printf("%d %d",a,b);
printf("%d",a,b);
printf(a,b);
printf("%d",printf("%d %d",a,b));
printf("%d",printf("%d",a,b));
printf("%d",printf(a,b));
printf("%d",printf("Hello"));
printf("%d",printf("%d",printf("Welcome to programming")));
printf("%d %d %d",a,b);
return 0;
}
