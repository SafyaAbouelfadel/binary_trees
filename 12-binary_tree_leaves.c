#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the number of leaves in a binary tree
 * @tree: Pointer to the root node of the binary tree
 *
 * Return:
 * - The number of leaves in the binary tree as a size_t.
 * - 0 if the tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
