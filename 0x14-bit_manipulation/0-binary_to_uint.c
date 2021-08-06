#include "main.h"
#include "stddef.h"
#include <stdio.h>
/**
 * _pow - por with recursion
 * @base: raised
 * @expo: power
 * Return: pow
 */
int _pow(unsigned int base, unsigned int expo)
{
	unsigned int res = 1;

	if (expo == 0)
		return (res);
	while (expo > 0)
	{
		res *= base;
		expo--;
	}
	return (res);
}
/**
 * binary_to_uint - convert binary number to an unsigned int
 * @b: pointer to string of 0 and 1
 * Return: conver number.
 * Description: if there one or more no number 0, 1 character in the string
 * or if b is NULL return 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_number = 0;
	unsigned int position = 0;
	unsigned int decimal;
	int count = 0;

	if (b == NULL)
		return (converted_number);
	while (b[count])
	{
		if (b[count] != '0' && b[count] != '1')
			return (converted_number);
		count++;
	}
	while (count > 0)
	{
		if (b[count - 1] == '1')
		{
			decimal = _pow(2, position);
			converted_number += decimal;
		}
			count--;
			position++;
	}
	return (converted_number);
}
