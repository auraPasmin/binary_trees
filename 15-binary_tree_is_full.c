#include "binary_trees.h"
/**
 * binary_tree_is_full - goes through a binary tree using pre-order traversal
 * @tree: parent of node.
 * Return: nothing.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	full = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
	return (full);
}
