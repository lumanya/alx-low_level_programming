#include <stdio.h>

/**
 * main - Entry porint of rth program
 *
 * puchar -c function printing caharacter
 *
 * Return: Always 0 (success)
 */


int main(void)
{

	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
