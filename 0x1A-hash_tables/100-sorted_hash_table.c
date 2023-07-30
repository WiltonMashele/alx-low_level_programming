#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_insert(shash_table_t *ht, const char *key, const char *value);
char *shash_table_retrieve(const shash_table_t *ht, const char *key);
void shash_table_show(const shash_table_t *ht);
void shash_table_show_reverse(const shash_table_t *ht);
void shash_table_remove(shash_table_t *ht);

/**
 * shash_table_create - Build a new sorted hash table.
 * @size: The dimension of the new sorted hash table.
 *
 * Return: NULL if an error is encountered.
 *         Otherwise, a reference to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * shash_table_insert - Insert a new element into a sorted hash table.
 * @ht: A reference to the sorted hash table.
 * @key: The key to be added - cannot be blank.
 * @value: The value related to the key.
 *
 * Return: 0 on failure.
 *         1 on success.
 */
int shash_table_insert(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current;
	char *value_clone;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_clone = strdup(value);
	if (value_clone == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->shead;
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value_clone;
			return (1);
		}
		current = current->snext;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(value_clone);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(value_clone);
		free(new_node);
		return (0);
	}
	new_node->value = value_clone;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}

/**
 * shash_table_retrieve - Get the value paired with a key in a sorted hash table.
 * @ht: A reference to the sorted hash table.
 * @key: The key whose value should be retrieved.
 *
 * Return: NULL if the key is not found.
 *         Otherwise, the value paired with the key in ht.
 */
char *shash_table_retrieve(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_show - Display a sorted hash table in order.
 * @ht: A reference to the sorted hash table.
 */
void shash_table_show(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_show_reverse - Display a sorted hash table in reverse order.
 * @ht: A reference to the sorted hash table to display.
 */
void shash_table_show_reverse(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_remove - Remove a sorted hash table.
 * @ht: A reference to the sorted hash table.
 */
void shash_table_remove(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *temp_node;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		temp_node = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp_node;
	}

	free(head->array);
	free(head);
}
