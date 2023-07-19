#include <stdio.h>
int main(){
char x;
printf("Enter the charater: ");
scanf("%c",&x);

if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
   printf("%c is alphabet",x);
else
    printf("%c is not alphabet",x);
}
