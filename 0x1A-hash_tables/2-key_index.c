#include "hash_tables.h"

/**
 * key_index - returns the key index according to given hash
 *
 * @key: key
 * @size: size of array
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
