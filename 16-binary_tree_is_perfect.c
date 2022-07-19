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

/**
 * binary_tree_is_perfect - main
 * @tree: tree
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	if (binary_tree_height(tree->right) == binary_tree_height(tree->left))
	{
		if (binary_tree_is_perfect(tree->right) && binary_tree_is_perfect(tree->left))
			return (1);
	}	
	return (0);
}
