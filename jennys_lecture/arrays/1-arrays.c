#include <stdio.h>
#include <stdlib.h>

void main()

{
	int a[5];
	int i;
	printf("Please enter array elements: ");
	for (i = 0; i < 5; i++)	
		scanf("%d", &a[i]);	
	for (i = 0; i < 5; i++)
		printf("\narray element at index %d is %d\n", i,a[i]);

}
