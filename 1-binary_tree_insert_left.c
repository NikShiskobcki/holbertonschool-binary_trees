#include "binary_trees.h"

/**
 * binary_tree_insert_left - main
 * @parent: parent
 * @value: value
 * Return: node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *aux;

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
		aux = parent->left;
		parent->left = node;
		node->left = aux;
		node->parent = parent;
		aux->parent = node;
	}
	else
	{
		parent->left = node;
		node->parent = parent;
	}
	return (node);	
}
