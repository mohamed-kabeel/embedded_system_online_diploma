#include <stdio.h>
int _4th_bit(int num)
{
    if(num &(1<<3))
       return 1;
    else 
        return 0;
}
int main()
{
    int x ;
    printf("Enter the nubmer: ");
    scanf("%d",&x);
    
    if(_4th_bit(x))
       printf("4th least significant bit is 1");
    else
       printf("4th least significant bit is 0");
}