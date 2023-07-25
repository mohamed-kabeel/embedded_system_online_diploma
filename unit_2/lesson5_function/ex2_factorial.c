#include <stdio.h>
int fact(unsigned int n)
{

    if(n>0)
       return n*fact(n-1) ;
    else if(n==0)
        return 1;
    else
        return NULL;
}
int main()
{
    unsigned int n;
    printf("Enter a postive number: ");
    scanf("%d",&n);
    unsigned int f = fact(n);
    if(f == NULL)
        printf("you enter negative number");
    else
       printf("%d",f);
}
