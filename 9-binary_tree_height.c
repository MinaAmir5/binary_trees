#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 *@tree: pointer to the root node of binary tree to measure.
 * Return: height or 0 otherwise.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree)
	{
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		if (right > left)
			return (right);
		else
			return (left);
	}
	else
		return (0);
}
