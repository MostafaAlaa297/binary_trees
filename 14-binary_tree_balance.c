#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: 1 if true, and 0 otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_height = 0;
	int left_height = 0;
	
	if (tree == NULL) return (0);

	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_height - Calculate the height of the tree
 * @tree: A pointer to the root node of the tree to calculate height
 *
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree)
	{
		if (tree->left != NULL)
			left_height = 1 + binary_tree_height(tree->left);
		if (tree->right != NULL)
			right_height = 1 + binary_tree_height(tree->right);
	}

	return ((left_height > right_height) ? left_height : right_height);
}
