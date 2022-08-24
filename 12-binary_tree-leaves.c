#include "binary_trees.h"

/**
	* binary_tree_leaves - counts the leaves in a binary tree
	* Description: counts the leaves in a binary tree
	* @tree: root node of tree
	* Return: size_t
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left;
	size_t leaves_right;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		leaves_left = binary_tree_leaves(tree->left);
		leaves_right = binary_tree_leaves(tree->right);
		return (0 + leaves_left + leaves_right);
	}
	else
	{
		leaves_left = binary_tree_leaves(tree->left);
		leaves_right = binary_tree_leaves(tree->right);
		return (1 + leaves_left + leaves_right);
	}
}
