#include <stdio.h>
int clear_bit(int num,int p)
{
    num &= ~(1<<p);
    return num ;
}
int main()
{
    printf("%d",clear_bit(3,0));
}
