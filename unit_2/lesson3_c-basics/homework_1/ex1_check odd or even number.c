#include <stdio.h>
int main(){

	int n;
	printf("Enter an integer number you want to check: ");
	scanf("%d",&n);
	if(n%2==0)
		printf("%d number is even",n);
	else
		printf("%d is odd",n);

}
