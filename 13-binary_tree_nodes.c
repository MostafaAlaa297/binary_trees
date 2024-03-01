#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the tree nodes with at least 1 child
 * @tree: A pointer to the root node of the tree to count nodes
 *
 * Return: Number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_nodes = 0;
	
	if (tree == NULL) return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		count_nodes = 1;

		count_nodes += binary_tree_nodes(tree->right);
		count_nodes += binary_tree_nodes(tree->left);
	}

	return (count_nodes);
}
