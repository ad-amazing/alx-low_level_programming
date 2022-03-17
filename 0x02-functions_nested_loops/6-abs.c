 #include "main.h"

/*
 * _abs - compute the absolute value of an integer 
 * @n: the int to check
 * Description: This function returns absolute value of a number
 * Return: the absolute value of int
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
