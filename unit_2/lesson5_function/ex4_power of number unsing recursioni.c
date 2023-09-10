#include <stdio.h>
#include <stdlib.h>
int pow(int b,int e)
{
    if(e>0)
        return b * pow(b,e-1);
    else
        return 1;
}
int main()
{
   unsigned b,e;
   printf("Enter base number: ");
   scanf("%u",&b);
   printf("Enter power number(positive integer): ");
   scanf("%u",&e);
  printf("%d^%d = %u",b,e,pow(b,e));

}
