#include "holberton.h"
/**
 * print_chessboard - print chessboard
 * @a[8]:subarray
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0;i < 8; i++)
	{
		_putchar(a[i]);
	}
	_putchar(32);
}
