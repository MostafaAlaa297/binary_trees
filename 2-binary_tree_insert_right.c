#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a new node to the right
 * @parent: A pointer to the new node to insert the left child in
 * @value: The value to store in the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent != NULL)
	{
		if (parent->right == NULL)
			parent->right = new_node;
		new_node->parent = parent;
	}
	else
		new_node->parent = NULL;

	return (new_node);
}
