#include <stdio.h>
int main(){
float a,b,c;
printf("Enter three number: ");
scanf("%f%f%f",&a,&b,&c);

if(a>b){
    if(a>=c)
        printf("largest number = %.2f",a);
    else
        printf("largest number = %.2f",c);
}
else {
    if(b>=c)
        printf("largest number = %.2f",b);
    else
        printf("largest number= %.2f",c);
}

}
