#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c;
	c = ' ';

	printf("Enter a character:\n(enter x to exit)\n");
	while (c != 'x')
	{
		c = getc(stdin);
		putchar(c);
	}
	printf("\nOut of the loop. Bye!\n");
	return (0);
}
