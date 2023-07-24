#include <stdio.h>
int main(){
int n,val,arr[100];
printf("Enter no of elements: ");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("Enter Element to be searched: ");
scanf("%d",&val);
int loc = NULL;
for(int i =0;i<n;i++){
        if(arr[i]==val)
            {
                loc = i+1;
                break;
            }
}
if(loc == NULL)
{
    printf("the number isn't exist");
}
else
{
    printf("number at found at location = %d",loc);
}
}
