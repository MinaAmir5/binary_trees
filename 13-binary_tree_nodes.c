#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes in a binary tree.
 *@tree: pointer to the root node of the binary tree to count.
 * Return: number of nodes or 0 otherwise.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		return  (1 + binary_tree_nodes(tree->left) +
			 binary_tree_nodes(tree->right));
	return (0);
}
