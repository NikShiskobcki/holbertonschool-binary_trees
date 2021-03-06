#include "binary_trees.h"

/**
 * binary_tree_height - main
 * @tree: tree
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rightH = 0, leftH = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	rightH = binary_tree_height(tree->right) + 1;
	leftH = binary_tree_height(tree->left) + 1;

	if (leftH >= rightH)
		return (leftH);
	else
		return (rightH);
}
