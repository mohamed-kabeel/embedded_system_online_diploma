#include <stdio.h>
#include <string.h>
void f_reverse(char *str,int len,char *rev)
{
    if (len >0)
    {
        rev [len-1] = str[0];
        f_reverse(str+1,len-1,rev);
    }
    else
        rev[strlen(rev)] =NULL;
}
int main(){
char str[200];
char rev[200];
printf("Enter the string: ");
gets(str);
f_reverse(str,strlen(str),rev);
printf("%s",rev);

}
