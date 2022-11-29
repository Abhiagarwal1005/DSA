#include <stdio.h>
#include <stdlib.h>

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

    ptr->next = NULL;

    while (first!= NULL)
    {
        printf("Element : %d\n",first->data);
        first = first->next;
    }
    return 0;
}