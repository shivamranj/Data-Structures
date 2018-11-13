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
	struct node *n=new struct node();
	n->data=data; 
	n->left=NULL;
	n->right=NULL;
	if(root==NULL)
	{
		root=n;
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
				par->left=n;
				par=par->left->left;
			
			}
			else
			par=par->left;
		}
		else if(par->data<data)
		{
			if(par->right==NULL)
			{
				par->right=n;
				par=par->right->right;
				
			}
			else
			par=par->right;
		}
	}
	}
}
	void inorder(struct node *root)
	{
		if(root==NULL)
		{
			return;
		}
			inorder(root->left);
			cout<<root->data<<" ";
			inorder(root->right);
		
	}
	void search(int data)
	{
	    int count=0;
		struct node *current=root;
		while(current->data!=data)
		{

			if(current->data>data)
			{
				current=current->left;
			}
			else
			{
			current=current->right;	
			}
if(current==NULL)
{
    count=1;
    cout<<"node not found";
    break;
}
			
			
		    
		}
		if(count==0)
		cout<<" node found";
	}

int main()
{
	insert(9);
	insert(10);
	insert(8);
	insert(13);
	insert(7);
	insert(4);
	inorder(root);
	search(6);
	return 0;
}
