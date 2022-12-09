#include<stdio.h>
void main()
{
	/* code */
	int n , prod=1;
	printf("Enter the number");
	scanf("%d",&n);
	for(int i = 1; i<=n; i++){
		prod = prod*i;

	}
	printf("Fibonacci of %d is %d", n,prod);
	
}