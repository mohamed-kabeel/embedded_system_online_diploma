#include <stdio.h>
#define area(r) (3.14*r*r)
int main()
{
    float r ;
    printf("Enter the raduis: ");
    scanf("%f",&r);
    printf("Area = %.2f",area(r));
}
