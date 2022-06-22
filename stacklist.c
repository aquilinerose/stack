#include<stdio.h>
#include<stdlib.h>
int isfull();
int isempty();
int top=-1,size=4,entry;
struct node{
	int data;
	struct node *next;
	};

void main()
{
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	int ch;
	while(1)
	{
		printf("\nenter your choice\n1. push\n2. pop\n3. display\n4. exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				int entry;
				printf("enter data");
				scanf("%d",&entry);
				if(head==NULL)
					{
					head=(struct node *)malloc(sizeof(struct node));
					head->data=entry;
					tail=head;
					pos=head;
					top++;
					}
				else if(top==size)
					{
					printf("stack overflow");
					}
				else
					{		
					tail->next=(struct node*)malloc(sizeof(struct node));
					tail=tail->next;
					tail->data=entry;
					top++;
					break;
				}
				}
			case 2:{
				if(head==NULL)
					{
					printf("stack underflow");
					}
				else
					{
					struct node *temp=head;
					head=head->next;
					temp->next=NULL;
					free(temp);
					top--;
					}		
				break;
				}
			case 3:{
				pos=head;
				printf("\nelements are:");
				while(pos!=NULL)
					{
					printf("\t%d",pos->data);
					pos=pos->next;
					}	
				break;
				}
			case 4:{
				exit(0);
				break;
				}
			default:printf("invalid choice");
			}
		}
}
