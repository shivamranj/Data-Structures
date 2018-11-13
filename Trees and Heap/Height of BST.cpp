#include<iostream>
#include<stdlib.h>
using namespace std;
void inorder(struct node *);
struct node
{
	int data;
	struct node *left,*right;
};
struct node *root=NULL;
void insert(int data)
{
	struct node *par;
	struct node *temp=new struct node();
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		par=root;
		while(par!=NULL)
		{
			if(par->data>data)
			{
				if(par->left==NULL)
				{
					par->left=temp;
					par=par->left->left;
				}
				else
				par=par->left;
			}
			else if(par->data<data)
			{
				if(par->right==NULL)
				{
					par->right=temp;
					par=par->right->right;
				}
				else
				par=par->right;
			}
		}
	}
}
int height(struct node *node)
{
	if(node==NULL)
	   {
		return 0;
		}
	     else
	     {
	int l=height(node->left);
	int r=height(node->right);
	if(l>r)
	return (l+1);
	else
	return (r+1);
      }
}
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	int h=height(root);
	cout<<"Height of tree is :"<<h;
	return 0;
	}
