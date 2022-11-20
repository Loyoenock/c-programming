#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, rows;

	printf("Please enter number of row: ");
	scanf("%d", &rows);

	for (i = rows; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	return (0);
}
