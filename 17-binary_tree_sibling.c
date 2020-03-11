#include "binary_trees.h"

/**
 * binary_tree_sibling - after
 * @node: tree
 * Return:sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sib;

	if (!node || !node->parent)
		return (NULL);

	sib = node->parent->left;
	if (node->parent->left == node)
		sib = node->parent->right;
	return (sib);
}
