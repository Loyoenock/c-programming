#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, rows;

	printf("Please Enter rows: ");
	scanf("%d", &rows);

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c ", 64 + i);
		}
		printf("\n");
	}
	return (0);
}
