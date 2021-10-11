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
	hash_node_t *node = NULL, *node_pointer = NULL;

	if (ht == NULL || key == NULL || value == NULL || ht->array == NULL)
		return (status);
	if (strcmp(key, "") == 0)
		return (status);
	index = key_index((unsigned char *)key, ht->size);
	node_pointer = ht->array[index];
	while (node_pointer != NULL)
	{
		if (strcmp(node_pointer->key, key) == 0)
		{
			free(node_pointer->value);
			node_pointer->value = strdup((char *)value);
			status = 1;
			return (status);
		}
		node_pointer = node_pointer->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (status);
	}
	node->key = strdup((char *)key);
	node->value = strdup((char *)value);
	node->next = ht->array[index];
	ht->array[index] = node;
	status = 1;
	return (status);
}
