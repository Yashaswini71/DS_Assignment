#include <stdio.h>
#include <stdlib.h>
struct sll
{
	int data;
	struct sll *next;
};
typedef struct sll node;
node *f=NULL,*l=NULL;

void display()
{
	node *p=f;
	if(p==NULL)
	printf("\n\nnothing to print\n\n");
	else
	{
		//printf("\n");
		while(p!=NULL)
		{
			printf("%d\t",p->data);
			p=p->next;
		}
	}
}

void in(int e)
{
	printf("\n\ninserting %d\n\n",e);
	node *n=(node*)malloc(sizeof(node));
	n->data=e;n->next=NULL;
	if(f==NULL)
		f=l=n;
	else
	{
		l->next=n;l=n;
	}
}

void in_first(int e)
{
	printf("\n\ninserting %d at first\n\n",e);
	node *n=(node*)malloc(sizeof(node));
	n->data=e;n->next=f;f=n;
	display();
}

int main()
{
	in(1);in(3);in(10);//0
	display();
	printf("\n\n");
	in_first(55);
	printf("\n\n");
}