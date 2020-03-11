#include "binary_trees.h"
/**
 * binary_tree_height - goes through a binary tree using pre-order traversal
 * @tree: parent of node.
 * Return: nothing.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (!tree)
		return (0);
	h_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	h_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (h_left > h_right ? h_left : h_right);
}
