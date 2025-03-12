#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* addnode(struct node *head, int data);
void printnode(struct node *head);
struct node *insertionfromstart(struct node *head, int data);

int main()
{
    struct node *head = NULL; // Empty linked list  
    head = addnode(head, 10);
    head = addnode(head, 20);
    head = addnode(head, 30);
    head = addnode(head, 40);
    head = addnode(head, 50);
    head = insertionfromstart(head, 5);
    head = insertionfromstart(head, 0);
    head = insertionfromstart(head, -5);
    printnode(head);
    return 0;
}

struct node* addnode(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *p = head;
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
    return head;
}
void printnode(struct node *head)
{
    struct node *p = head;
    while(p != NULL)
    {
        printf("%d->", p->data);
        p = p->next;
    }
    printf("NULL\n");
} 
struct node *insertionfromstart(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    head = temp;
    return head;
}
