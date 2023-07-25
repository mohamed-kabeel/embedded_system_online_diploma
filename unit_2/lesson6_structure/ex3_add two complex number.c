#include <stdio.h>
struct complex{
float real;
float img;
};
int main(){
    struct complex complex1,complex2,add;
    printf("for 1st complex number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f",&complex1.real,&complex1.img);

    printf("for 2st complex number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f",&complex2.real,&complex2.img);

    add.real = complex1.real + complex2.real;
    add.img =  complex1.img  + complex2.img;
    printf("sum = %.1f + %.1f i",add.real,add.img);
}
