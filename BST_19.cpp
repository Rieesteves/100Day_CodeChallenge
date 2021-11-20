// C++  to construct a BST
#include <iostream>

using namespace std;


struct Node
{
	int data;
	Node *left, *right;
};

Node* getNode(int data)
{

	Node *newNode =
		(Node*)malloc(sizeof(Node));
	
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}


// function to construct a BST from
Node *LevelOrder(Node *root , int data)
{
	if(root==NULL){
		root = getNode(data);
		return root;
	}
	if(data <= root->data)
	root->left = LevelOrder(root->left, data);
	else
	root->right = LevelOrder(root->right, data);
	return root;	
}

Node* constructBst(int arr[], int n)
{
	if(n==0)return NULL;
	Node *root =NULL;

	for(int i=0;i<n;i++)
	root = LevelOrder(root , arr[i]);
	
	return root;
}

// print the inorder traversal
void inorderTraversal(Node* root)
{
	if (!root)
		return;
	
	inorderTraversal(root->left);
	cout << root->data << " ";
	inorderTraversal(root->right);
}


// Driver 
int main()
{
	int arr[] = {12,9,15,3,1,18,6,21};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	Node *root = constructBst(arr, n);
	
	cout << "Inorder Traversal: ";
	inorderTraversal(root);
	return 0;
}
