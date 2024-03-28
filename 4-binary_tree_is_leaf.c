#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that check  if node is a leaf or not
 * @node: nodes is binary trees
 * Return: true if node is a leaf, otherwise false
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (true);
	return (false);
}
