#include "binary_trees.h"

/**
 * binary_tree_is_leaf - main
 * @node: node to check
 * Return: 1 if leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if ((node->right == NULL) && (node->left == NULL))
		return (1);
	else
		return (0);
}
