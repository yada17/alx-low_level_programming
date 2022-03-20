
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry level
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'd'; ++c)
	putchar(c);
	for (c = 'f'; c <= 'p'; ++c)
	putchar(c);
	for (c = 'r'; c <= 'z'; ++c)
	putchar(c);
	return (0);
}
