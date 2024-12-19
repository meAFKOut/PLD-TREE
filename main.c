#include <stdui.h>
#include <stdlib.h>
#include "binary_tree.h"


int main() {

	struct TreeNode *root = NULL;
	int value;
	int height;
	int *arr = NULL ;
	int index = 0;
	int arr_size = 0;

	printf("Write the value for Tree (Write -1 to stop): \n");
	while(1){ 
		printf("Write the number: ")
		scanf("%d" , &value);
	       	if (value == -1) break;
		root = InserdNote(root , value);
	}
        int calculateHeight(struct TreeNode *root) {
		if (root == NULL) {
			return -1;
		{
		int leftHeight = calculateHeight(root->left);
		int rightHeight = calculateHeight(root->right);
		return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
		}	





















