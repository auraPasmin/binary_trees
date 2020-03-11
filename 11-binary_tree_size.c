#include "binary_trees.h"
/**
 * binary_tree_depth - goes through a binary tree using pre-order traversal
 * @tree: parent of node.
 * Return: nothing.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size);
}
