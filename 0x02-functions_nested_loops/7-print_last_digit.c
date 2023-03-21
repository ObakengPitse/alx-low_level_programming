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
	_putchar(x);
	return (x);
}
