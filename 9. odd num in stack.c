#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
};
int count(struct node* root)
{
  int a=1;
  printf("odd numbers: ");
  while(root!=NULL)
  {
    if(root->data%2!=0)
    {
      if(a!=1)
      {
        printf(", ");
      }
      printf("%d",root->data);
      a=0;
    }
    root=root->next;
  }
}
int main()
{
  struct node* root=malloc(sizeof(struct node));
  root->data=1;
  root->next=malloc(sizeof(struct node));
  root->next->data=3;
  root->next->next=malloc(sizeof(struct node));
  root->next->next->data=8;
  root->next->next->next=NULL;
  count(root);
  return 0;
}

