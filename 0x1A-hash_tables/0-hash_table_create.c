#include "hash_tables.h"

/**
* hash_table_create - create hash table
* @size: size of hash table
* Return: size of hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
unsigned long int i = 0;

ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
return (NULL);

ht->size = size;
ht->array = malloc(sizeof(hash_nod_t *) * size);
if (ht->array == NULL)
return (NULL);

for (i = 0; i < size; i++
ht->arrayp[i] = NULL;

return (ht);
}
