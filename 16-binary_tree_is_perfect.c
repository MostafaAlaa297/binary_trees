#include "binary_trees.h"

int is_perfect_recursive(const binary_tree_t *tree, size_t height, size_t level);
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Measures if a tree is perfect
 * @tree: A pointer to the root node of the tree
 *
 * Return: 1 if true, and 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_perfect_recursive(tree, binary_tree_height(tree), 0));
}

/**
 * is_perfect_recursive - Recursive helper function to check that the tree is perfect
 * @tree: A pointer to the root node of the tree
 * @height: Height of the tree
 * @Current level being checked
 *
 * Return: 1 if the tree is perfect, and 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t height, size_t level)
{
	
	if (tree == NULL) return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (level == height);

	if (tree->left != NULL || tree->right != NULL)
		return (is_perfect_recursive(tree->left, height, level + 1) && is_perfect_recursive(tree->right, height, level + 1));

	return (0);
}
