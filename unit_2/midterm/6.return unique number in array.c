#include <stdio.h>
int unique(int arr[],int n)
{
    int count ;
    for(int i =0;i<n;i++)
    {
        count =0;
        for(int j =0;j<n;j++)
        {
            if(arr[i] == arr[j])
                  ++count;
        }
        if(count == 1)
            return arr[i];
    }
}
int main(){
    int n ;
    int arr[150];
    printf("Enter number of array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(int i =0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("unique num = %d",unique(arr,n));
}
