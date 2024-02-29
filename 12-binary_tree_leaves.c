#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the tree leaves
 * @tree: A pointer to the root node of the tree to count leaves
 *
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_leaves = 0;
	
	if (tree == NULL) return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count_leaves += binary_tree_leaves(tree->right);
	count_leaves += binary_tree_leaves(tree->left);

	return (count_leaves);
}
