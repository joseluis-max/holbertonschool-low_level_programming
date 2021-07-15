#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concat all arguments
 * @ac: argument counter
 * @av: arguments 2D array
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int row;
	int col;
	int c;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (row = 0; row < ac - 1; row++)
	{
		for (col = 0; av[row][col] != '\0'; col++)
		{
			c++;
		}
	}
	str = malloc(sizeof(char) * (c + ac + 1));
	if (str == NULL)
		return (NULL);
	for (row = 0; row < ac - 1; row++)
        {
                for (col = 0; av[row][col] != '\0'; col++)
                {
                        str[i] = av[row][col];
			i++;
                }
		str[i] = '\n'
		i++;
        }
	return (str);

}
