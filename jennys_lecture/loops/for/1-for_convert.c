#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;

	printf("Hex(uppercase)		Hex(lowercase)		 Decimal\n");
		for (i = 1; i <= 16; i++)
			printf("%x			 %x			 %d\n", i, i, i);
	return (0);
}
