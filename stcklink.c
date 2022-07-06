#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct stack{
		int data;
		struct stack *next;
		};
	struct stack *head=NULL,*temp=NULL,*top=NULL;
	int ch,entry,level=0;
	while(1)
	{
		printf("enter your choice\n1.push\n2.pop\n3.display\n4.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:/*push*/
			{
				printf("enter the element");
				scanf("%d",&entry);
				if(level<=4)
				{
					if(top==NULL)
					{
						top=(struct stack *)malloc(sizeof(struct stack));
						top->data=entry;
						top->next=NULL;
						head=top;
						level++;
					}
					else
					{
						top=(struct stack *)malloc(sizeof(struct stack));
						top->data=entry;
						top->next=head;
						head=top;
						level++;
					}
				}
				else
				{
					printf("stack overflow");
				}
				break;
			}
			case 2:/*pop*/
			{
				if(top==NULL)
				{
					printf("stack underflow");
				}
				else
				{
					head=head->next;
					struct stack *temp=top;
					printf("popped element is %d",top->data);
					top=top->next;
					free(temp);
					level--;
				}
				break;
			}
			case 3:/*display*/
			{
				while(head!=NULL)
				{
					printf("%d\n",head->data);
					head=head->next;
				}
				head=top;
				break;
			}
			case 4:/*exit*/
			{
				printf("good bye");
				exit(0);
				break;
			}
			default:
			{
				printf("invalid choice");
				break;
			}
		}
	}
}
				

				
		
	
