#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int index =0;
    while(str[index]!=NULL)
    {
        index++;
    }
    printf("Length of string: %d",index);

}
