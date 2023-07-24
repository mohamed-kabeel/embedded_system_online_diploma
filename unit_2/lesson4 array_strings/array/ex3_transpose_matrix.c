#include <stdio.h>
#include <stdlib.h>
void print_matrix(int arr[100][100],int r,int c){
  for(int i =0;i<r;i++)
    {
       for(int j=0;j<c;j++)
           printf("%d\t",arr[i][j]);
           printf("\n");
    }

}
int main(){
int c,r;
int a[100][100];
int t[100][100];
printf("Enter rows and columns of matrix: ");
scanf("%d%d",&r,&c);
for(int i =0;i<r;i++)
    {
        for(int j =0;j<c;j++)
        {
             printf("Enter element a%i%i:",i+1,j+1);
             scanf("%d",&a[i][j]);
             t[j][i] =a[i][j];
        }

    }
printf("Enter matrix: \n");
print_matrix(a,r,c);
printf("transpose of matrix:\n");
print_matrix(t,c,r);
}
