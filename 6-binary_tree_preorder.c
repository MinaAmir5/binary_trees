#include "binary_trees.h"

/**
 * binary_tree_preorder - search a binary tree using pre-order traversal.
 *@tree: pointer to the root node of the tree to search.
 *@func: pointer to a function to call each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func && tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->right, func);
		binary_tree_preorder(tree->left, func);
	}
}
