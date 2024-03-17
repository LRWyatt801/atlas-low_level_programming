#include "hash_tables.h"
#include <stdbool.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: n/a
*/

void hash_table_print(const hash_table_t *ht)
{
        unsigned long int i;
        hash_node_t *data;
        bool comma = 0;

        if (ht == NULL)
                return;
        
        printf("{");
        for (i = 0; i < ht->size; i++)
        {
                if (ht->array[i] != NULL)
                {
                        if (comma)
                                printf(", ");
                        data = ht->array[i];
                        while (data != NULL)
                        {
                                printf("'%s': '%s'", data->key, data->value);
                                data = data->next;
                                if (data != NULL)
                                        printf(", ");
                        }
                        comma = 1;
                }
        }
        printf("}\n");

}