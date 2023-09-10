#include <stdio.h>
#include <string.h>
void rev(char str[])
{
    int len = strlen(str);
    int str_index,temp_index = 0;
    char temp[200];
    for(str_index = len-1;str_index>=0;str_index--)
    {
        if(str[str_index] == ' ' || str_index == 0)
        {
            int k ;
            if (str_index == 0)
                k = str_index;
            else
                k = str_index+1;
            for(;str[k]!= NULL&&str[k] != ' ';k++)
            {
                temp[temp_index] = str[k];
                temp_index ++;
            }
            temp[temp_index++] = ' ';
        }
    }
    temp_index = NULL;
    printf("\n");
    strcpy(str,temp);
}
int main()
{
    char str[200] ;
    printf("Enter string: ");
    gets(str);

    rev(str);
    printf("%s",str);
}
