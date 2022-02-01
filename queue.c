#include <stdio.h>
#include <stdlib.h>
struct queue
{
	int data;
	struct queue *next;
};
typedef struct queue node;
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

void enqueue(int e)//insert
{
	node n=(node)malloc(sizeof(node));
	n->data=e;n->next=NULL;
	(f==NULL)?({f=l=n;}):({l->next=n;l=n;});
}

void dequeue()//delete_front
{
	node *p=f;printf("%d",*p);
	f=f->next;
	free(p);
}

int main()
{
	for(int i=0;i<3;i++)
		enqueue(i+1);
	printf("\nprinting after enqueue\t");display();
	printf("\nprinting after dequeue\t");
	for(int i=0;i<3;i++)
	{
		dequeue();
		if(i!=2)printf(" , ");
	}
}
