#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
void inorder(struct node* root)
{
    if(root==NULL)return;
    inorder(root->left);
    printf("%d->",root->data);
    inorder(root->right);
}
void preorder(struct node* root)
{
    if(root==NULL)return;
    printf("%d->",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node* root)
{
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    printf("%d->",root->data);
}
struct node* create(int value)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node*));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node* insert(struct node* root,int value)
{
    if(root==NULL)return create(value);
    if(value<root->data)
    {
        root->left=insert(root->left,value);
    }
    else if(value>root->data)
    {
        root->right=insert(root->right,value);
    }
    return root;
}
int main()
{
    struct node* root=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);
    printf("inorder traversal:");
    inorder(root);
    printf("\npreorder traversal:");
    preorder(root);
    printf("\npostorder traversal:");
    postorder(root);
}

