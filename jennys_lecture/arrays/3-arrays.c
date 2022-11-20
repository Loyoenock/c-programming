#include <stdio.h>
#include <stdlib.h>

/**
 * A program to check for even and odd numbers
 */

int main()
{
	int a[10], i;
	int even = 0, odd = 0;

	printf("Please enter number: ");
	for (i = 0; i < 10; i++)
	{
	scanf("%d", &a[i]);
	
		if (a[i] % 2 == 0)
			even = even + 1;
		else
			odd = odd + 1;
	}
	printf("Total even numbers are %d", even);
	printf("\nTotal odd numbers are %d", odd);
	printf("\n");

	return (0);

}
