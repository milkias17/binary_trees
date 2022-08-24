#include "binary_trees.h"

/**
	* binary_tree_leaves - counts the leaves in a binary tree
	* Description: counts the leaves in a binary tree
	* Return: size_t
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left || tree->right)
		return (0 +  binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	else
		return (1 + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
