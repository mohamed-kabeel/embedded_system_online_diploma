#include <stdio.h>
int cmp(char a[],char b[])
{
    int i = 0;
    while(a[i]!= NULL && b[i]!= NULL)
    {
        if(a[i] != b[i])
            return 0;
        i++;
    }
    if((a[i] != NULL)|| (b[i] != NULL))
         return 0;
    return 1;
}
int main()
{
    char *str1 = "mohamed";
    char str2[1000] ;
    scanf("%s",str2);
    if( cmp(str1,str2))
       printf("correct user");
    else 
       printf("wrong user");
}