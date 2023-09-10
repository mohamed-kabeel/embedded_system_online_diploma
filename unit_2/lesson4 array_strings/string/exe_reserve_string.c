#include <stdio.h>
#include <string.h>
int main(){
char str[200];
char rev[200];
printf("Enter the string: ");
gets(str);
int len = strlen(str);
for(int i =0;i<len;i++)
{
    rev[i] = str[len-i-1];
}
rev[len] = NULL;
printf("Reverse string is: %s",rev);

}
