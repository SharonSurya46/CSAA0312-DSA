#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};

void printList(struct node*node)
{
	while(node!=NULL)
	{
		printf("%d->",node->data);
		node=node->next;
	}
	printf("NULL\n");
}

void push(struct node**head_ref,int new_data)
{
	struct node*new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}

int main()
{
	struct node* head=NULL;
	push(&head,3);
	push(&head,2);
	push(&head,1);
	
	printf("linked list:");
	printList(head);
	return 0;
}
