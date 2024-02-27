#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: The parent node of the node to be created
 * @value: The value to put in the new node
 *
 * Return: A pointer to the node, or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if(new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left  = NULL;
	new_node->right = NULL;

	if (parent != NULL)
		new_node->parent = parent;
	else
		new_node->parent = NULL;

	return (new_node);
}	
