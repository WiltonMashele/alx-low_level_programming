#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with 
 * a specified key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key whose value is to be retrieved.
 * Return: If the key is not found - NULL.
 * 	Otherwise - The value associated with 
 * 	the specified key in the hash table 'ht'.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    if (ht == NULL || key == NULL || *key == '\0')
        return NULL;

    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    if (index >= ht->size)
        return NULL;

    hash_node_t *node = ht->array[index];
    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0)
            return node->value;
        node = node->next;
    }

	return(NULL);
}
