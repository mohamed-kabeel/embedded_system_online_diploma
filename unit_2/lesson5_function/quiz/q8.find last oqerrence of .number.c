#include <stdio.h>
int last_occurence(int arr[],int num,int arr_size)
{
    int k = -1;
    for(int i =0;i<arr_size;i++)
    {
        if(arr[i]  == num)
            k = i;
    }
    return k;
}
int main()
{
    int num ;
    int arr[10] = {1,24,5,8,4,6,5,4,7,4};
    printf("plese enter number: ");
    scanf("%d",&num);
    printf("%d",last_occurence(arr,num,sizeof(arr)/sizeof(arr[0])));
}
