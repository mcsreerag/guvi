#include<stdio.h>
#include<stdlib.h>
struct node{
	int key;
	struct node *next;
};
struct node *header;
void init()
{
	header=(struct node *)malloc(sizeof(struct node));
	header->next=NULL;
	header->key=0;
}
void main()
{
	init();
	int k;
	while(1)
	{
		printf("\nEnter the key : ");
		scanf("%d",&k);
		if(k==000)
			break;
		else
		{
			struct node *temp=(struct node *)malloc(sizeof(struct node));
			temp->key=k;
			temp->next=NULL;
			struct node *temp2=(struct node *)malloc(sizeof(struct node));
			if(header->next==NULL)
				header->next=temp;
			else
			{
				temp2=header->next;
				while(temp2->next!=NULL)
				{
					temp2=temp2->next;
				}
				temp2->next=temp;
			}
		}
	}
	printf("\nEntered list is  : ");
	struct node *temp1=(struct node *)malloc(sizeof(struct node));
	temp1=header->next;
	while(temp1->next!=NULL)
	{
		printf("%d\t",temp1->key);
		temp1=temp1->next;
	}
	printf("%d\t",temp1->key);
}