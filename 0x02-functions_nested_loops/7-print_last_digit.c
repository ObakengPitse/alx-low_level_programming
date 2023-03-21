#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @c: input number
 *
 * Return: value of last digit
 */
int print_last_digit(int c)
{
	int x;

	x = c % 10;
	if (c < 0)
	{
		_putchar(-x + 48);
		return (-x);
	}
	else
	{
		_putchar(x + 48);
		return (x);
	}
}
