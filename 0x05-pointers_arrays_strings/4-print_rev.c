#include "main.h"
/**
 * print_rev - function that prints a string, in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int c;
int len = _strlen(s);
for (c = len - 1; c >= 0; c--)
putchar(s[c]);
putchar('\n');
}
