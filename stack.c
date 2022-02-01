include <stdio.h>
#include <stdlib.h>
struct stack
{
	int data;
	struct stack *next;
};
typedef struct stack node;
node *f=NULL,*l=NULL;

void display()
{
	node *p=f;
	(p==NULL)?
	printf("\n\nnothing to print\n\n"):
	({
		//printf("\n");
		while(p!=NULL)
		{
			printf("%d\t",p->data);
			p=p->next;
		}
	});
}

void push(int e)//insert
{
	node n=(node)malloc(sizeof(node));
	n->data=e;n->next=NULL;
	(f==NULL)?({f=l=n;}):({l->next=n;l=n;});
}


void pop_FIFO()//delete_last
{
	node *p=f,*q;
	while(p!=l)
	{
		q=p;//previous node
		p=p->next;//the node
	}
	l=q;
	q->next=NULL;
	free(p);
}

