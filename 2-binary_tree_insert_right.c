#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node
 * @parent: parent of node.
 * @value: value of n structure binary_tree_t.
 * Return: new node or NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);
	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}
