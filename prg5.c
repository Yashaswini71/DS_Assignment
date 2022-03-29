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
    node *n = (node *)malloc(sizeof(node));
    n->data = e;
    n->next = NULL;
    if (f == NULL)
        f = l = n;
    else
    {
        l->next = n;
        l = n;
    }
    display();
}

void check_ll()
{
    if (l->next == f)
        printf("\nlinked list is cirular");
    else
        printf("\nlinked list is not circular");
}
int main()
{
    in(1);
    in(3);
    in(10);
    printf("\n\n");
    display();
    check_ll();
}