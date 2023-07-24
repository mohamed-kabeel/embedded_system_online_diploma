#include <stdio.h>
int main(){
    float arr[200];
    int n;
    printf("Enter number of data: ");
    scanf("%d",&n);
    float sum =0;
    for(int i =0;i<n;i++){
        printf("Enter number: ");
        scanf("%f",&arr[i]);
        sum += arr[i];
    }
    printf("average = %.2f",sum/n);

}
