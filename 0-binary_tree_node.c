#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node for a binary tree
 * @parent: Pointer to the parent node of the new node
 * @value: Value of the new node
 *
 * Return: Pointer to the newly created node,
 * and NULL if memory allocation fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
