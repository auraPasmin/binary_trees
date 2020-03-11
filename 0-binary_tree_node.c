#include "binary_trees.h"
/**
 * binary_tree_node - create a new node.
 * @parent: parent of node.
 * @value: value of n structure binary_tree_t.
 * Return: new node or NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	return (node);
}
