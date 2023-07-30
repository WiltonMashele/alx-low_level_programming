#include "hash_tables.h"

/**
 * hash_table_print - Displays the contents of a hash table.
 * @ht: A pointer to the hash table to be displayed.
 *
 * Description: This function prints the key/value pairs in the hash table
 *              based on their appearance in the hash table's array, separating
 *              the pairs with commas.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int index;
	unsigned char print_comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			current_node = ht->array[index];
			while (current_node != NULL)
			{
				if (print_comma == 1)
					printf(", ");
				printf("'%s': '%s'", current_node->key, current_node->value);
				print_comma = 1;
				current_node = current_node->next;
			}
		}
	}
	printf("}\n");
}
