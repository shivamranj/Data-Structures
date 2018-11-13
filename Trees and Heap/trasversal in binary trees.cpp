#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *left,*right;
	node(int data)
	{
		this->data=data;
		left=right=NULL;
	}
};
void preOrder(struct node *node)
{
	if(node==NULL)
	{
		return;
	}
	cout<<node->data<<" ";
	preOrder(node->left);
	preOrder(node->right);
}
void postOrder(struct node *node)
{
	if(node==NULL)
	{
		return;
	}
	postOrder(node->left);
	postOrder(node->right);
	cout<<node->data<<" ";
}
void inOrder(struct node *node)
{
	if(node==NULL)
	{
		return;
	}
	inOrder(node->left);
		cout<<node->data<<" ";
	inOrder(node->right);

}
int main()
{
	struct node *root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
		root->left->left=new node(4);
	root->left->right=new node(5);
cout<<"Pre order traversal is \n";
preOrder(root);

cout<<"\n Post order traversal is \n";
postOrder(root);

cout<<"\n In order traversal is \n";
inOrder(root);
return 0;

}

