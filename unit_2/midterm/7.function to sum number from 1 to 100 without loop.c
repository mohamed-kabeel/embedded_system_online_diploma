#include <stdio.h>
int sum_fun(num)
{
    return (num*(num+1))/2;
}
int main(){
    printf("sum of number between 1 and 100 = %d",sum_fun(100));
}
