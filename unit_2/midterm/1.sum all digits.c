#include <stdio.h>
int sum_d(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num%10;
        num /= 10;
    }
    return sum ;
}
int main(){
    int num;
    printf("please enter number: ");
    scanf("%d",&num);
    printf("sum of all digts = %d",sum_d(num));
}
