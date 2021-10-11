#include <stddef.h>
#include "hash_tables.h"
/**
 * hash_table_get - get a value by key
 * @ht: hash table
 * @key: key for to get the value
 * Return: char * value of key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (ht == NULL || ht->array == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);

	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
