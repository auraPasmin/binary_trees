#include "binary_trees.h"
/**
 * binary_tree_is_leaf - that checks if a node is a leaf
 * @node: parent of node.
 * Return: one or cero.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
