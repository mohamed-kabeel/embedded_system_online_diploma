#include <stdio.h>
int main(){
int n ,sum = 0;
printf("Enter the number: ");
scanf("%d",&n);
sum = (n*(n+1))/2;
//       or  ********
/*for(int i =1;i<=n;i++)
{
    sum += i;
}*/
printf("sum = %d",sum);

}
