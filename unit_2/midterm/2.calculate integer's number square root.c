#include <stdio.h>
//#include <math.h>
float square_root(int num)
{
   return pow(num,.5);
}
int main(){
    printf("please enter the number: ");
    int x ;
    scanf("%d",&x);
    printf("the square root  = %.3f",square_root(x));

}
