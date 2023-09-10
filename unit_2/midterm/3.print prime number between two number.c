#include <stdio.h>
void p_n_b(int n1,int n2)
{
    for(int i = n1;i<=n2;i++)
    {
        if(cheak_prime(i) == 0)
             continue;
        printf("%d ",i);
    }
}

int cheak_prime(int num)
{
    if(num == 1 ||num == 0)
        return 0;
    for(int j =2;j<num ;j++)
    {
        if((num %j) == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1,n2;
    printf("Enter the two numbers: ");
    scanf("%d %d",&n1,&n2);
    p_n_b(n1,n2);
}
