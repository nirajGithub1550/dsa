#include <stdio.h>
#include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void linkedListTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }
// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 7;
//     head->next = second;

//     second->data = 9;
//     second->next = third;

//     third->data = 11;
//     third->next = fourth;

//     fourth->data = 15;
//     fourth->next = NULL;

//     linkedListTraversal(head);
//     return 0;
// }

// struct Node
// {
//     int data;
//     struct Node * next;

// };

// void Traversal(struct Node *ptr)
// {
//     while(ptr != NULL)
//     {
//         printf(" Elements : %d \n ", ptr->data);
//         ptr = ptr->next;
//     }
// }
// int main()
// {
//     struct Node * head;
//     struct Node * second;
//     struct Node * third;

//     head = (struct Node*)malloc(sizeof(struct Node));
//     second = (struct Node*) malloc(sizeof(struct Node));
//     third = (struct Node*)malloc(sizeof(struct Node));

//     head->data = 5;
//     head->next = second;

//     second->data = 11;
//     second->next = third;

//     third->data = 17;
//     third->next = NULL;

//     Traversal(head);
//     return 0;

// }

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void Traversal(struct Node *ptr)
// {
//     while(ptr != NULL)
//     {
//         printf("Elements : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// struct Node * InsetAtFirst(struct Node *head, int data)
// {
//     struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = data;
// }
// int main()
// {
//     struct Node * head;
//     struct Node * second;
//     struct Node * third;
//     struct Node * fourth;

//     head = (struct Node*)malloc(sizeof(struct Node));
//     second = (struct Node*)malloc(sizeof(struct Node));
//     third = (struct Node*)malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));

//     head->data = 100;
//     head->next = second;

//     second->data = 200;
//     second->next = third;

//     third->data = 300;
//     third->next = fourth;

//     fourth->data = 400;
//     fourth->next = NULL;

//     // Traversal(head);
//     head = InsetAtFirst(head, 56);
//     Traversal(head);

//     return 0;

// }

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void Traversal(struct Node *ptr)
// {
//     while(ptr != NULL)
//     {
//         printf("Elements : %d \n", ptr->data);
//         ptr = ptr->next;

//     }
// }
// struct Node *insertAtFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = data;
// }
// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;

//     head = (struct Node*)malloc(sizeof(struct Node));
//     second = (struct Node*)malloc(sizeof(struct Node));
//     third = (struct Node*)malloc(sizeof(struct Node));

//     head->data = 15;
//     head->next = second;

//     second->data = 25;
//     second->next = third;

//     third->data = 35;
//     third->next = NULL;

//     // Traversal(head);
//     head = insertAtFirst(head, 5);
//     Traversal(head);
//     return 0;
// }

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void Traversal(struct Node *ptr)
// {
//     while(ptr != NULL)
//     {
//         printf("Elements : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct Node * insertAtBegin(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = data;
// }
// struct Node * insertAtIndex(struct Node *head, int data, int index)
// {
//     struct Node
// };
// int main()
// {
//     struct Node *head = (struct Node*)malloc(sizeof(struct Node));
//     struct Node *second = (struct Node*)malloc(sizeof(struct Node));
//     struct Node *third = (struct Node*)malloc(sizeof(struct Node));

//     head->data = 20;
//     head->next = second;

//     second->data = 30;
//     second->next = third;

//     third->data = 40;
//     third->next = NULL;

//     // Traversal(head);
//     head = insertAtBegin(head, 10);
//     Traversal(head);
//     return 0;

// }

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void Traversal(struct Node *ptr)
// {
//     while(ptr != NULL)
//     {
//         printf("Elements : %d \n", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct Node * insertAtBegin(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = data;
// }
// int main()
// {
//     struct Node *head = (struct Node*)malloc(sizeof(struct Node));
//     struct Node *second = (struct Node*)malloc(sizeof(struct Node));
//     struct Node *third = (struct Node*)malloc(sizeof(struct Node));

//     head->data = 17;
//     head->next = second;

//     second->data = 27;
//     second->next = third;

//     third->data = 37;
//     third->next = NULL;

//     head = insertAtBegin(head, 7);
//     Traversal(head);

//     return 0;

// }

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void Traversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Elements %d \n", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct Node *insetAtBegin(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = data;
// }
// struct Node *insertAtIndex(struct Node *head, int data, int index)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;
//     int i = 0;
//     while (i != index - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }
// struct Node *insertAtEnd(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;
//     ptr->data = data;
//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->next = NULL;
//     return head;
// }
// struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;

//     ptr->next = prevNode->next;
//     prevNode->next = ptr;
//     return head;
// }
// struct Node *deleteFirst(struct Node *head)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr = head;
//     head = ptr->next;
//     free(ptr);
//     return head;
// }
// // struct Node *deleteLast(struct Node *head, int index)
// // {
// //     struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
// //     struct Node *p = head;
// //     int i = 0;
// //     while(i != index-1)
// //     {
// //         p = p->next;
// //     }
// //     ptr = p->next;
// //     p->next = ptr->next;
// //     // p->next = NULL;
// //     free(ptr);
// //     return head;
// // }
// struct Node *deleteLast(struct Node *head)
// {
//     struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
//     struct Node *p = head;
//     while(p->next != NULL)
//     {
//         p = p->next;
//     }
//     ptr = p->next;
//     ptr->next = NULL;
//     free(p);
//     return head;
// }
// int main()
// {
//     struct Node *head = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *second = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *third = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));


//     head->data = 11;
//     head->next = second;

//     second->data = 21;
//     second->next = third;

//     third->data = 31;
//     third->next = fourth;

//     fourth->data = 41;
//     fourth->next = NULL;


    // head = insetAtBegin(head, 1);
    // head = insertAtIndex(head, 111,3);
    // head = insertAtEnd(head, 1);
    // head = insertAfterNode(head, third, 51);
//     head = deleteLast(head);
//     Traversal(head);

//     return 0;
// }

// struct Node
// {
//     int data;
//     struct Node *next;

// };
// struct Node *insertAtBegin(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr ->next = head;
//     ptr->data = data;

// }
// struct Node *deleteAtIndex(struct Node *head, int index)
// {
//     struct Node *ptr = head;
//     struct Node *p = head->next;
//     for(int i = 0; i<index-1; i++)
//     {
//         ptr = ptr->next;
//         p = p->next;
//     }
//     ptr->next = p->next;
//     free(p);
//     return head;
// }
// struct Node *deleteLast(struct Node *head)
// {
//     struct Node *p = head;
//     struct Node *q = head->next;
//     while(q->next!= NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = NULL;
//     free(q);
//     return head;
// }
// struct Node *deleteAtValue(struct Node *head, int value)
// {
//     struct Node *p = head;
//     struct Node *q = head->next;
//     while(q->data != value && q->next != NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     if(q->data == value)
//     {
//         p->next = q->next;
//         free(q);

//     }
//     return head;
// }
// void Traversal(struct Node *ptr)
// {
//     while(ptr!= NULL)
//     {
//         printf("Elements : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }
// int main()
// {
//     struct Node * head = (struct Node*)malloc(sizeof(struct Node));
//     struct Node * second = (struct Node *)malloc(sizeof(struct Node));
//     struct Node * third = (struct Node*)malloc(sizeof(struct Node));

//     head->data = 11;
//     head->next = second;

//     second->data = 21;
//     second->next = third;

//     third->data = 31;
//     third->next = NULL;

//     // head = insertAtBegin(head,1);
//     // head = deleteAtIndex(head,1);
//     // head = deleteLast(head);
//     head = deleteAtValue(head, 31);
//     Traversal(head);
//     return 0;
// }


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

// struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
// {
//     struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
//     ptr->data = data;
//     ptr ->next = prevNode->next;
//     prevNode->next = ptr;
//     return head;
// }

struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
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
    head = insertAfterNode(head, second, 70);
    DisplayList(head);
    return 0;

    

}