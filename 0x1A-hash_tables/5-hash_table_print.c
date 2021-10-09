#include <stddef.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - print a table hash
 * @ht: hash table pointer
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int i = 0;
	int flag = 0;

	if (ht != NULL && ht->array != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				if (!flag)
				{
					printf("'%s': '%s'", tmp->key, tmp->value);
					flag = 1;
				}
				else
					printf(", '%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
