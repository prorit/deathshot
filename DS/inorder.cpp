






































/*
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left, *right;
};

struct node* createNode(int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void inorder(struct node *root){
	if(root == NULL ) return;

	inorder(root -> left);	
	printf("%d ", root -> data);
	inorder(root -> right);
}

int main(){
	struct node *root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	
	printf("\nInorder is: ");
	inorder(root);
	
	return 0;
}
*/
