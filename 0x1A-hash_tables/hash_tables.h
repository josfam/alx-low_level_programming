#ifndef HASH_TABLES_HEADER
#define HASH_TABLES_HEADER

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Creates a hash table */
hash_table_t *hash_table_create(unsigned long int size);

/* a hash function implementing the djb2 algorithm. */
unsigned long int hash_djb2(const unsigned char *str);

/* Gives the index of a key */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/* Adds an element to the hash table */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/* Retrieves a value associated with a key */
char *hash_table_get(const hash_table_t *ht, const char *key);

/* Prints a hash table */
void hash_table_print(const hash_table_t *ht);

/* Returns the last index where a node was found in the hash table */
int last_node_location(const hash_table_t *ht);

/* Prints key-value pairs of connected nodes in a hash table */
void print_kv_nodes(int last_index, int current_index, hash_node_t *current);

#endif
