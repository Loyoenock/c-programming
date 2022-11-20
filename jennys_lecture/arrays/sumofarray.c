#include <stdio.h>
#include <stdlib.h>
/* A program that calculate the sum of two arrays of 5 element and sum them in another array.
 */


int main()
{
	int arr1[5], arr2[5], i;
	int sumarr[5];

	printf("Please array elements for arr1: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("\nPlease enter elements for arr2: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < 5; i++)
	{
		sumarr[i] = arr1[i] + arr2[i];
		printf("\nThe third element of %d is %d", i, sumarr[i]);
	}
	printf("\n");
}
