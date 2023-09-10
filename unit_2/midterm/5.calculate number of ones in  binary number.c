#include <stdio.h>
int calc_ones(int num)
{
    int count = 0;
    int rem;
    while (num!= 0)
    {
        rem = num%2;
         num /= 2;
        if(rem != 0)
        {
            count ++;
        }
    }
    return count ;
}
int main(){
    int num ;
    printf ("Enter the number: ");
    scanf("%d",&num);
    printf("%d",calc_ones(num));

}
