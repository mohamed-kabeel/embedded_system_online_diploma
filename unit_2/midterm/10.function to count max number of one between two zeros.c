#include <stdio.h>
int max_ones(int num)
{
    int arr[200];
    int index = 0;
    int max =0;
    while(num!=0)
    {
        arr[index] = num%2;
        num = num/2;
        index ++;
    }
    arr[index] = 0;
    for(int i =0;i<=index;i++)
    {
    	int count = 0;
    	if(arr[i] == 0&&arr[i+1] == 1)
    	{
    		i++;
    		while(arr[i]!=0)
    		{
    			count ++;
    			i++;
    		}
    		i--;
    	 }
    	if(max<count)
    		max = count;
    }
    return max;
}
int main()
{
  int n ;
  printf("Enter the number: ");
  scanf("%d",&n);
  printf("%max number of one's = %d",max_ones(n));
}
