#include "hash_tables.h"
/**
 * key_index - Calculate index key on table
 * @key: string for add to hash table
 * @size: long of hash table
 * Return: index at which the key/value pair should
 * be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
