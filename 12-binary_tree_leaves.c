#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 *@node: is a pointer to the node to check.
 * Return: return 1 if node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_leaves - number of leaves
 *@tree: pointer to the root node of the binary tree to count .
 * Return: number of leaves or 0 otherwise.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_is_leaf(tree) +
			binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
