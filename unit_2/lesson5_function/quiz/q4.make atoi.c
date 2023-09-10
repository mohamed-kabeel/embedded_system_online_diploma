#include <stdio.h>
int atoi(char *arr)
{
    int result = arr[0]-48;
    for(int i =1;i<strlen(arr);i++)
    {
        result = (result*10) + (arr[i]-48);
    }
    return result;
}
int main()
{
    char n[20];
    printf("Enter the number");
    scanf("%s",n);
    int x = atoi(n);
    printf("%d",x);
}
