#include <stdio.h>
struct d{
int feet;
float inch;
};
int main(){
    struct d d1,d2,sum;
    printf("Enter information for 1st distance\n");
    printf("enter feet: ");
    scanf("%d",&d1.feet);
    printf("enter inch: ");
    scanf("%f",&d1.inch);

    printf("Enter information for 2st distance\n");
    printf("enter feet: ");
    scanf("%d",&d2.feet);
    printf("enter inch: ");
    scanf("%f",&d2.inch);
    float i = (d1.inch+d2.inch)/12;
    sum.feet = d1.feet + d2.feet +i;
    sum.inch = (i-(int)i)*12;

    printf("sum of distances =%d'-%.2f",sum.feet,sum.inch);

}
