#include <stdio.h>
void rev_arr(int arr[],int arr_size)
{
    for(int i =0;i<arr_size/2;i++)
    {
        int temp = arr[i];
        arr[i] = arr[arr_size-i-1];
        arr[arr_size-i-1] = temp;
    }
}
void print_arr(int arr[],int arr_size)
{
    printf("{");
    printf("%d",arr[0]);
    for(int i=1;i<arr_size;i++)
    {
            printf(",%d",arr[i]);
    }
    printf("}");
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    print_arr(arr,(sizeof(arr)/sizeof(arr[0])));
    printf("\n");
    rev_arr(arr,(sizeof(arr)/sizeof(arr[0])));
    print_arr(arr,(sizeof(arr)/sizeof(arr[0])));

}
