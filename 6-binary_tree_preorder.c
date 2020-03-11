#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: parent of node.
 * @func: function for print.
 * Return: nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	fun(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
