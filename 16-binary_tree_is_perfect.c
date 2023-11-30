#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree.
 *@tree: pointer to the root node of binary tree to measure.
 * Return: tree heightt or 0 otherwise.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 1, right = 1;

	if (tree)
	{
		if (tree->left)
			left += binary_tree_height(tree->left);
		if (tree->right)
			right += binary_tree_height(tree->right);
		if (right > left)
			return (right);
		else
			return (left);
	}
	else
		return (0);
}
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
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 *@tree: pointer to the root node of binary tree to check.
 * Return: 1 if perfecr, 0 otherwsie.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = 0, perfect_size = 0;

	if (tree == NULL)
		return (0);
	h = binary_tree_height(tree);
	perfect_size = (1 << (h + 1)) - 1;
	if (perfect_size == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
