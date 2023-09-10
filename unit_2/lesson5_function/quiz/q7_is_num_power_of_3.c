#include <stdio.h>
#include <math.h>
int is_power3(int num)
{
 int mult = 9;
 while (mult <= num)
 {
   if(mult == num)
      return 0;
   mult *= num;
 }
 return 1;
}
int main()
{
   int x ;
   printf("Enter the number: ");
   scanf("%d",&x);
   if(is_power3(x))
      printf("%d =>1",x);
   else 
      printf("%d => 0",x);

}