#include "binary_trees.h"

/**
 * binary_tree_siblin - main
 * @node: node
 * Return: node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *pRight, *pLeft;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);

	pRight = node->parent->right;
	pLeft = node->parent->left;

	if (pRight == node)
		return (pLeft);
	return (pRight);
}
