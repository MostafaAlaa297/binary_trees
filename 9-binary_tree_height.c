#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;

	if (tree == NULL) return (0);

	if (tree->left != NULL)
		count_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		count_right = 1 + binary_tree_height(tree->right);

	if (count_left >= count_right)
		return (count_left);
	else
		return (count_right);
}
