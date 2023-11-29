#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 *@parent: a pointer to the node to insert the left-child in.
 *@value: the value to store in the new node.
 * Return: pointer to created node, or NULL otherwise.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	node->n = value;
	if (parent->left == NULL)
		parent->left = node;
	else
	{
		node->left = parent->left;
		parent->left = node;
		node->left->parent = node;
	}
	return (node);
}
