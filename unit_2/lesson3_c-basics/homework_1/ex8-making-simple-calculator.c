#include <stdio.h>
int main(){
char o;
float a,b;
printf("enter operator either +or -or*or divide: ");
scanf("%c",&o);
printf("enter the two operands: ");
scanf("%f %f",&a,&b);
switch(o){
case '+':
    {
        printf("%.1f+%.1f= %.1f",a,b,a+b);
        break;

    }
case '-':
    {
        printf("%.1f-%.1f= %.1f",a,b,a-b);
        break;
    }
case '*':
    {
        printf("%.1f*%.1f= %.1f",a,b,a*b);
        break;
    }
case '/':
    {
        printf("%.1f*%.1f= %.1f",a,b,a/b);
        break;
    }
default:
{
    printf("you enter wrong value of operator");
    break;
}
}
}
