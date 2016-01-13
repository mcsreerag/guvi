#include<stdio.h>
#include<stdlib.h>
struct node
{
	int *data;
	struct node *next;
};
void reverse(struct node **header)
{
	struct node *prev=NULL;
	struct node *current=(*header);
	struct node *next=NULL;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	(*header)=prev;
}
void push(struct node **header,int key)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	struct node *temp1=(struct node *)malloc(sizeof(struct node));
	temp->data=key;
	temp->next=(*header);
	(*header)=temp;
}
void print(struct node *header)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp=header;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void findmiddle(struct node *header)
{
	struct node *fast=header;
	struct node *slow=header;
	if(header!=NULL)
	{
		while(fast!=NULL&&fast->next!=NULL)
		{
			fast=fast->next->next;
			slow=slow->next;
		}
		printf("\nMiddle element is : %d ",slow->data);
	}
	printf("\n");
}
void main()
{
	struct node *head=NULL;
	push(&head,20);
	push(&head,30);
	push(&head,50);
	push(&head,60);
	push(&head,70);
	print(head);
	findmiddle(head);
	reverse(&head);
	findmiddle(head);
	print(head);
}