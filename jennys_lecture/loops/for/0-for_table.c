#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, i, product;

	printf("Please Enter num: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		product = num * i;
		printf("%d * %d = %d\n", num, i, product);
	}
	return (0);
}
