#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, j, num;

	printf("Please enter alpha number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c ", 64+j);
		}
		printf("\n");
	}
	return (0);
}
