#include <stdio.h>
int main(){
char str[200];
char elm;
printf("Enter a string:");
//fflush(stdin);
gets(str);
printf("Enter a character to find frequency: ");
scanf("%c",&elm);
int count=0,i=0;
while(str[i]!=NULL)
{
    if(str[i]==elm)
        count++;
        i++;
}
printf("frequency of %c = %d",elm,count);

}
