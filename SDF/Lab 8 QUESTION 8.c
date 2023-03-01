#include<stdio.h>
int main(){
char inp;
printf("Enter a number,character or a special character:");
scanf("%c",&inp);
switch(inp){
case '1'...'9': printf("You entered a number.");
                    break;
case 'a'...'z': printf("You entered a character in small case.");
        break;
case 'A'...'Z':printf("You entered a character in Capital case.");
        break;
case '!':printf("You entered a special character.");
        break;
case '@':printf("You entered a special character.");
     break;
case '#':printf("You entered a special character.");
     break;
case '$':printf("You entered a special character.");
     break;
case '%':printf("You entered a special character.");
     break;
case '^':printf("You entered a special character.");
     break;
case '&':printf("You entered a special character.");
     break;
case '*':printf("You entered a special character.");
     break;
case '(':printf("You entered a special character.");
     break;
case ')':printf("You entered a special character.");
     break;
default: printf("You entered something else..");
         break;
}
return 0;
}
