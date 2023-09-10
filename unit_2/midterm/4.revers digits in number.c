#include <stdio.h>
#include <string.h>
int rev (char str[])
{
    int j = strlen(str)-1;
    for(int i =0;i<strlen(str)/2;i++,j--)
    {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp ;
    }
    return atoi(str);
}
int main()
{
    char str[100] ;
    gets(str);
    printf("%d",rev(str));
}
