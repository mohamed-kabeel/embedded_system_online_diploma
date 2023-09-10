#include <stdio.h>
#include <string.h>
void rev(int arr[],int arr_len)
{
    int j = arr_len-1;
    for(int i =0;i<arr_len/2;i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp ;
    }
}
int main()
{
    int arr[200] ;
    int n;
    printf ("Enter number of array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(int i =0;i<n;i++)
        scanf("%d",&arr[i]);
    rev(arr,n);
    printf("Reverse array: ");
    for(int i =0;i<n;i++)
        printf("%d ",arr[i]);
}
