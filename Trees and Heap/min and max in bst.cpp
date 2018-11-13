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
void min_max()
{
	int min,max;
	struct node *current;
	current=root;
	while(current!=NULL)
	{
	min=current->data;
	current=current->left;
	}
	current=root;
	while(current!=NULL)
	{
	max=current->data;
	current=current->right;
	}
	cout<<"Min value is:"<<min;
	cout<<"Max value is:"<<max;
}
int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(2);
	insert(70);
	insert(50);
	insert(15);
	min_max();
	
}
