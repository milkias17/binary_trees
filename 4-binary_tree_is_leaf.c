#include "binary_trees.h"

/**
	* binary_tree_is_leaf - checks if a node is a leaf
	* Description: checks if a node is a leaf
	* @node: node to check if its a leaf node or not
	* Return: int
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (!node->left && !node->right);
}
