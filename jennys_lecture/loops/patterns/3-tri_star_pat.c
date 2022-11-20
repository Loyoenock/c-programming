#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, rows;

	printf("Please enter number of rows: ");
	scanf("%d", &rows);

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= rows; j++)
		{
			if (( i + j) <= rows)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	return (0);
}
