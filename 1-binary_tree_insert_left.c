#include "binary_trees.h"

/**
 * binary_tree_insert_left - main
 * @parent: parent
 * @value: value
 * Return: node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *nodeAux;
	int valAux;

	if (parent == NULL)
		return (NULL);
	
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent->left != NULL)
	{
		nodeAux = malloc(sizeof(binary_tree_t));
		if (nodeAux == NULL)
			return (NULL);
		node->left = nodeAux;
		valAux = parent->left->n;
		parent->left = node;
		nodeAux->n = valAux;
		nodeAux->parent = node;
		nodeAux->left = NULL;
		nodeAux->right = NULL;
		node->parent = parent;
	}
	else
	{
		valAux = 0;
		parent->left = node;
		node->parent = parent;
	}
	return (node);
}
