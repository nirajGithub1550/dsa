#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void DisplayList(struct Node *p)
{
    // struct Node *p = head;
    while(p!=NULL)
    {
        printf("Elements : %d\n", p->data);
        p = p->next;
    }

}
struct Node *insertAtBegin(struct Node *head, int data)
{
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    p->next = head;
    p->data = data;
    return head;

}
struct Node *InsertAtLast(struct Node *head, int data)
{
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    struct Node *q = head;
    while(q->next!=NULL)
    {
        q = q->next;
        p = p->next;
    }
    q->next = p;
    p->data = data;
    p->next = NULL;
    return head;
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    struct Node *q;
    q = head;
    int i = 0;
    while(i!= index-1)
    {
        q = q->next;
        i++;
    }
    p->data = data;
    p->next = q->next;
    q->next = p;
    return head;
}

struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = ptr->next;
    free(ptr);
    return head;
}

struct Node *reverseList(struct Node **head)
{
    struct Node *prev = NULL;
    struct Node *curr = *head;
    struct Node *n = NULL;

    while(curr!= NULL)
    {
        // curr->next = prev;
        // prev = curr;
        // curr = n;
        // if(n!=NULL)n=n->next;

        n = curr->next;
        curr->next = prev;
        prev = curr ;
        curr = n;
    }
    return *head =  prev;
}
int main()
{
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));
    struct Node *forth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = forth;

    forth->data = 40;
    forth->next = NULL;

    // head = insertAtBegin(head, 1);
    // head = InsertAtLast(head, 50);
    // head = insertAtIndex(head, 60, 2);
    // head = insertAfterNode(head, second, 70);
    // head = deleteFirst(head);
    head = reverseList(&head);
    DisplayList(head);
    return 0;

    

}