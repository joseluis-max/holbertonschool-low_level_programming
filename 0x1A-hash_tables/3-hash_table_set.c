#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set - add a new element in table hashes
 * @ht: hash table
 * @key: string for into of ht
 * @value: value of key
 * Return: 1 succeeded or 0 on failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int status = 0;
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL || value == NULL || ht->array == NULL)
		return (status);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (status);
	}
	node->key = strdup((char *)key);
	node->value = strdup((char *)value);
	node->next = NULL;
	if (strcmp(key, "") == 0)
		return (status);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		status = 1;
	}
	else
	{	
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			ht->array[index]->value = NULL;
			ht->array[index]->value = (char *)value;
		}
		else
		{
			node->next = ht->array[index];
			ht->array[index] = node;
			status = 1;
		}
	}
	return (status);
}
