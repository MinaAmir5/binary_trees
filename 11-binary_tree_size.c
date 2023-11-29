#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 *@tree: pointer to the root node of binary tree to measure.
 * Return: if tree is NULL, must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n_right, n_left;

	if (tree == NULL)
		return (0);
	n_right = binary_tree_size(tree->right);
	n_left = binary_tree_size(tree->left);
	return (1 + n_left + n_right);
}
