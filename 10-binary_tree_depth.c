#include "binary_trees.h"
/**
 * binary_tree_depth - goes through a binary tree using pre-order traversal
 * @tree: parent of node.
 * Return: nothing.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);
	depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (depth ? depth : 0);
}
