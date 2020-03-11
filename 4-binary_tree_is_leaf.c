#include "binary_trees.h"
/**
 * binary_tree_is_leaf - that checks if a node is a leaf
 *
 * @node: parent of node.
 * Return: one or cero.
 */
int binary_tree_is_leaf(const binary_tree_t *node);
{
	if (!node->letf && !node->right)
		return (0);
	return (1);
}