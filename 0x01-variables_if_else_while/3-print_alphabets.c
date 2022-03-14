#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase
 * Return: 0 on success
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
