#include <stddef.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - create a table of hashes
 * @size: int long unsigned, size of array
 * Return: pointer newly hash created or null on error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table->array);
		free(table);
		return (NULL);
	}
	return (table);
}
