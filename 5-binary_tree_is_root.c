#include "binary_trees.h"
/**
 * binary_tree_is_root - that checks if a node is a leaf
 *
 * @node: parent of node.
 * Return: one or cero.
 */
int binary_tree_is_root(const binary_tree_t *node);
{
	if (!node->parent)
		return (0);
	return (1);
}
