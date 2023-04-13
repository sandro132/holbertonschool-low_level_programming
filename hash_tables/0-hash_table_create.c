#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nht;
	unsigned long int i = 0;

	nht = malloc(sizeof(hash_table_t));
	if (nht == NULL)
		return (NULL);

	nht->size = size;
	nht->array = malloc(sizeof(hash_table_t *) * size);
	if (nht->array == NULL)
		return (NULL);

	while (i < size)
		nht->array[i] = NULL;

	return (nht);
}
