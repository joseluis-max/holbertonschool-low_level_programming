#include <stddef.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *tmp2 = NULL;
	unsigned long int i = 0;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				tmp2 = tmp;
				tmp = tmp->next;
				if (tmp2->key && tmp2->value)
				{
					free(tmp2);
				}
			}
			free(tmp);
		}
		free(ht->array);
		free(ht);
	}
}
