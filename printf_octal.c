#include "holberton.h"
/**
 * printf_octal - Print the octal number
 * @count: Counter to be return to the function
 * @args: argument passed to the function
 * Return: Retunr the number of characters printed
 */
int printf_octal(va_list args, int count)
{
	unsigned int n;
	int i;
	int j;
	int octalNumber[100];
	int counter;

	n = va_arg(args, int);
	i = 0;
	while (n != 0)
	{
		octalNumber[i] = n % 8;
		n = n / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		count += _putchar(octalNumber[j] + '0');
	return (count);
}