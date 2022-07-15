#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_right - main
 * @parent: parent
 * @value: value
 * Return: node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right != NULL)
	{
		aux = parent->right;
		parent->right = node;
		node->right = aux;
		node->parent = parent;
		aux->parent = node;
	}
	else
	{
		parent->right = node;
		node->parent = parent;
	}
	return (node);
}
