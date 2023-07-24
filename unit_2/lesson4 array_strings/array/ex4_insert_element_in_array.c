#include <stdio.h>
int main(){
int n,loc,val,a[100];
printf("Enter no of elements: ");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter the element to be inserted: ");
scanf("%d",&val);
printf("Enter the location: ");
scanf("%d",&loc);
a[loc-1] = val;
for(int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}

}
