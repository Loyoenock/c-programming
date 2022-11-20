#include <stdio.h>
#include <stdlib.h>

int main()
{
	int marks[5], i;
	float sum = 0.0, average;

	printf("Please enter students marks: ");
	for (i = 0; i < 5; i++)
	{
	scanf("%d", &marks[i]);
	}
	for (i = 0; i < 5; i++)
	{	
		sum = sum + marks[i];

	}
	average = sum/5;
	printf("sum is %f", sum);
	printf("\naverage is %.2f",average);
	printf("\n");
	return (0);
}
