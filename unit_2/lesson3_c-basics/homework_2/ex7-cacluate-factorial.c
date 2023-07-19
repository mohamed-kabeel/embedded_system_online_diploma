#include <stdio.h>
int main(){
    int n,fact =1;
    printf("Enter an enteger:");
    scanf("%d",&n);
    if (n >0)
    {
         for(int i =1;i<=n;i++)
         {
           fact *=i;
         }
         printf("factorial = %d",fact);
    }
    else if(n == 0)
        printf("factorial = %d",1);
    else
        printf("error!!! factorial of negative number doesn't exist");

}
