#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node.
 *@parent: is a pointer to the parent node of the created node.
 *@value: is the value to put in the new node.
 * Return: pointer to the new node or NULL otherwise.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	node->n = value;
	return (node);
}
