#include<stdio.h>
#include<stdlib.h>
struct node{
	int key;
	struct node *next;
};
struct node *header1,*header2,*header3;
struct node *sumh;
void init()
{
	header1=(struct node *)malloc(sizeof(struct node));
	header2=(struct node *)malloc(sizeof(struct node));
	header3=(struct node *)malloc(sizeof(struct node));
}
void getnum1()
{
	int flag=1,k;
	do
	{
		scanf("%d",&k);
		struct node *node1=(struct node *)malloc(sizeof(struct node));
		node1->key=k;
		node1->next=NULL;
		header1->next=node1;
	}while(k!=0);
}
void getnum2()
{
	int flag=1,k;
	do
	{
		scanf("%d",&k);
		struct node *node1=(struct node *)malloc(sizeof(struct node));
		node1->key=k;
		node1->next=NULL;
		header2->next=node1;
	}while(k!=0);
}
void getnum3()
{
	int flag=1,k;
	do
	{
		scanf("%d",&k);
		struct node *node1=(struct node *)malloc(sizeof(struct node));
		node1->key=k;
		node1->next=NULL;
	}while(k!=0);
}
void add()
{

	int carry=0;
	sumh=(struct node *)malloc(sizeof(struct node));
	struct node *temp1=(struct node *)malloc(sizeof(struct node));
	struct node *temp2=(struct node *)malloc(sizeof(struct node));
	struct node *temp3=(struct node *)malloc(sizeof(struct node));
	temp1=header1->next;
	temp2=header2->next;
	temp3=header3->next;
	while((temp1->next!=NULL)&&(temp2->next!=NULL)&&(temp3->next!=NULL))
	{
		printf("Hello World\n");
		struct node *node1=(struct node *)malloc(sizeof(struct node));
		int sum=temp1->key+temp2->key+temp3->key+carry;
		printf("%d\n",sum );
		if(sum>10)
		{
			carry=sum/10;
			sum=sum%10;
		}
		node1->key=sum;
		node1->next=NULL;
		sumh->next=node1;
		temp1=temp1->next;
		temp2=temp2->next;
		temp3=temp3->next;

	}
}
void show(struct node *head)
{
	head=(struct node *)malloc(sizeof(struct node));
	struct node *temp1=(struct node *)malloc(sizeof(struct node));
	temp1=head->next;
	while(temp1->next!=NULL)
	{
		printf("%d\t",temp1->key);
		temp1=temp1->next;
	}	
	printf("%d\n",temp1->key);
}
void main()
{
	init();
	getnum1();
	printf("num1 entered\n");
	getnum2();
	printf("num2 entered\n");
	getnum3();
	printf("num3 entered\n");
	show(header1);
	show(header2);
	show(header3);
	add();
	printf("Addition complete\n");

}
