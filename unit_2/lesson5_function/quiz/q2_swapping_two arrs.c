#include <stdio.h>
void swap (int arr1[],int arr2[],int *size1,int *size2)
{
    int stop;
    if(*size1>*size2)
        stop = *size1;
    else 
        stop = *size2;

    int temp = *size1;
    *size1 = *size2;
    *size2 = temp;
    for(int i =0;i<stop;i++)
    {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
int main()
{
    int arr1[100], size1, size2;
    int arr2[100];
    printf("Enter size of arr1: ");
    scanf("%d",&size1);
     printf("Enter arr1: ");
    for(int  i =0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of arr2: ");
    scanf("%d",&size2);
     printf("Enter arr2: ");
    for(int  i =0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("hallo every body");
    swap(arr1,arr2,&size1,&size2);
    //after swaping
      printf("after swaping \n arr1 is : ");
    for(int  i =0;i<size1;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\narr2 is : ");
    for(int  i =0;i<size2;i++)
    {
        printf("%d ",arr2[i]);
    }


}