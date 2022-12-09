#include <stdio.h>
#include <conio.h>
void main()
{
	/* code */
	int n , sum=0;
	printf("Enter the number\n");
	scanf("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		/* code */
		sum = sum + i;

	}
	printf("%d", sum);
	getch();
	
}