#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabet except q and e'
 * Return: 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
		putchar('\n');
		return (0);
}
