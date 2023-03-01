#include<stdio.h>
void main(){
int n,orig,rev,rem,count=0;
printf("Enter the number to checked for palindrome:");
scanf("%d",&n);
orig=n;
while(n!=0){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    count++;
}
if(rev==orig){
    printf("No is palindrome");
    printf("%d",count);

}
else{
    printf("No is not palindrome");
    printf("%d",count);
}
return 0;
}
