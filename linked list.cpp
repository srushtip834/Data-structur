#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL;

int main()
{
	struct node *temp ,*newnode;
    int i,n,value,pos;
	head=NULL;	

printf("enter number of nods");
scanf("%d",&n);

 for (i=0; i<n; i++){
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("enter data");
 scanf("%d",&newnode->data);
 newnode->next=NULL;

if(head==NULL)
{
	head=newnode;
}
else{
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
}
}
printf("\n original Linked list:");
temp=head;
while(temp!=NULL)
{
	printf("%d->",temp->data);
	temp=temp->next;
}
printf("NULL");
printf("enter the value of position");
scanf("%d %d",&value,&pos);
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
newnode->next=NULL;
if(pos==1)
{
	newnode->next=head;
	head=newnode;
}
else
{
	temp=head;
	for(i=1; i<pos-1&&temp!=NULL; i++)
	{
		temp=temp->next;
	}
	if(temp==NULL)
	{
		printf("invalid position");
		free(newnode);
		return 1;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
temp=head;
printf("\nupadated invalid list:");
while(temp!=NULL)
{
	printf("%d->",temp->data);
	temp=temp->next;
}
printf("NULL");
return 0;
}





