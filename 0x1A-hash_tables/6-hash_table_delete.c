#include "hash_tables.h"

/**
 * remove_hash_table - Cleans up and removes a hash table.
 * @table: Reference to the hash table that needs to be deleted.
 */
void remove_hash_table(hash_table_t *table)
{
	hash_table_t *table_head = table;
	hash_node_t *current_node, *temporary_node;
	unsigned long int index;

	for (index = 0; index < table->size; index++)
	{
		if (table->array[index] != NULL)
		{
			current_node = table->array[index];
			do
			{
				temporary_node = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				current_node = temporary_node;
			} while (current_node != NULL);
		}
	}
	free(table_head->array);
	free(table_head);
}
