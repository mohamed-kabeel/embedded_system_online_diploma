#include <stdio.h>
void prime_interval(int a,int b)
{
    if(a%2==0)
        a+=1;
    else
        a+=2;
    if(b%2==0)
        b -=1;
    else
        b-=2;
    for(int i =a;i<=b;i+=2)
        printf("%d ",i);
}
int main(){
    int a,b;
    printf("Enter the two number(intervals): ");
    scanf("%d %d",&a,&b);
    printf("prime number between %d and %d are: ",a,b);
    prime_interval(a,b);


}
