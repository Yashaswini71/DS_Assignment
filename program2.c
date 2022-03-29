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
    node *n= (node*)malloc(sizeof(node));
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

void print_odd_data()
{
    node *p = f, *q;
    int c = 1;
    while (p != l)
    {
        if (p->data % 2 == 1)
        {
            printf("\nposition %d: %d", c, p->data);
        }
        q = p;       // previous node
        p = p->next; // the node
        c++;
    }
}

int main()
{
    in(1);
    in(3);
    in(10); // 0
    display();
    printf("\n\n");
    print_odd_data();
}