#include <stdio.h>
#include <stdlib.h>

void display();

struct node
{
    int data;
    struct node *next;
};
struct node *first;

int main()
{

    struct node *ptr, *cpt;
    char ch;

    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for first node : ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
    first = ptr;

    do
    {
        cpt = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data for another node : ");
        scanf("%d", &cpt->data);
        ptr->next = cpt;
        ptr = cpt;
        printf("Press M for more node & E for exit : ");
        scanf("\n%c", &ch);
    } while (ch == 'M');

    ptr->next = first;

    display();
    return 0;
}

void display()
{
    struct node *ptr;
    ptr = first;

    while (ptr->next != first)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
        printf("Element : %d\n", ptr->data);
}