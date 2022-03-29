#include <stdio.h>
#include <stdlib.h>
struct sll
{
    int data;
    struct sll *next;
};
typedef struct sll node;
node *f = NULL, *l = NULL;

void display()
{
    node *p = f;
    if (p == NULL)
        printf("\n\nnothing to print\n\n");
    else
    {
        // printf("\n");
        while (p != NULL)
        {
            printf("%d\t", p->data);
            p = p->next;
        }
    }
}

void in(int e)
{
    printf("\n\ninserting %d\n\n", e);
    node n = (node)malloc(sizeof(node));
    n->data = e;
    n->next = NULL;
    if (f == NULL)
        f = l = n;
    else
    {
        l->next = n;
        l = n;
    }
}

void in_any_node_after(int k, int e)
{
    node *p = f, *q;
    while (p->data != k && p != l)
    {
        q = p;       // previous node
        p = p->next; // the node
    }
    if (p == l && p->data != k)
        printf("\n\nnode missing\n\n");
    else
    {
        printf("\n\ninsert %d after %d\n\n", e, k);
        q = p;       // the node
        p = p->next; // next node
        node n = (node)malloc(sizeof(node));
        n->data = e;
        n->next = p;
        q->next = n;
        display();
    }
}

int main()
{
    in(1);
    in(3);
    in(10);
    display();
    printf("\n\n");
    in_any_node_after(3, 8);
}