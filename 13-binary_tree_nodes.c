#include "binary_trees.h"
/**
 * binary_tree_nodes - goes through a binary tree using pre-order traversal
 * @tree: parent of node.
 * Return: nothing.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_node;

	if (tree && (tree->left || tree->right))
	{
		n_node = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (n_node);
	}
	return (0);
}
