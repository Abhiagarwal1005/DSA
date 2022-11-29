#include <stdio.h>
#include <stdlib.h>

void display();
void dlt_end();

struct node
{
    int data;
    struct node *next;
};
struct node *first;

int main()
{
    struct node *one;
    struct node *two;
    struct node *three;
    struct node *four;
    struct node *five;

    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));
    five = (struct node *)malloc(sizeof(struct node));

    one->data = 45;
    one->next = two;
    first = one;

    two->data = 98;
    two->next = three;

    three->data = 90;
    three->next = four;

    four->data = 75;
    four->next = five;

    five->data = 56;
    five->next = NULL;

    display();
    dlt_end();
    printf("After the Deleting the last node..\n");
    display();

    return 0;
}

void display()
{
    struct node *ptr;
    ptr = first;

    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void dlt_end()
{
    struct node *ptr, *cpt;
    ptr = first;
    while (ptr->next!=NULL)
    {
        cpt =ptr;
        ptr = ptr->next;
    }
    cpt->next = NULL;
    free(ptr);
}