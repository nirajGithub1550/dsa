#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data ;
    struct Node *next;
    struct Node *prev;

};
void DispalyList(struct Node *head)

{
    struct Node *ptr = head;

    while(ptr->next== NULL)
    {
        printf("Elements : % \n", ptr->data);
        ptr = ptr->prev;
    }
   

}
void reverse (struct node **x)
{
    struct node *q, *r, *s;
    q = *x;
    r = NULL;
    while(q!=NULL)
    {
        s = r;
        r = q;
        q = 
    }
}
int main()
{
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));
    struct Node *forth = (struct Node*)malloc(sizeof(struct Node));

    head->prev = NULL;
    head->data = 15;
    head->next = second;

    second->prev = head;
    second->data = 25;
    second->next = third;

    third->prev = second;
    third->data = 35;
    third->next = forth;

    forth->prev = third;
    forth->data = 45;
    forth->next = NULL;

    DispalyList(head);
    return 0;

}