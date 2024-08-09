#include <stdio.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void beginsert();
void lastInsert();
void randomInsert();
void beginDelete();
void lastDelete();
void randomdelete();
void display();
void search();

int main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("\n... Choose One Option from the following List...\n");
        printf("\n1. Insert in beginning \n2. Insert at last \n3. Insert item at any location \n4. Delete from Beginning \n5. Delete from last \n. Delete item from any location \7. Search \n8. Show \n9. Exit \n");

        printf("\n Enter Your choice : ");
        scanf("\n%d", &choice);

        switch (choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            lastInsert();
            break;
        case 3:
            randomInsert();
            break;
        case 4:
            beginDelete();
            break;
        case 5:
            beginDelete();
            break;
        case 6:
            lastDelete();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("Invalid Choice..");

        }
    }
    return 0;
}
void beginset()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("\n Enter value: ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("Item Inserted");
    }
}
void lastInsert()
{
   struct node *ptr, *temp;
   int item;
   ptr = (struct node *)malloc(sizeof(struct node));
   if(ptr == NULL)
   {
    printf("\nOVERFLOW");
   } 
   else
   {
    printf("\nEnter value: ");
    scanf("%d", &item);
    ptr->data = item;
    if(head == NULL)
    {
        ptr->next = NULL;
        head = ptr;
        printf("item inserted");
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr -> next = NULL;
        printf("item inserted ");

    }
   }
}
void random_insert()
{
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc (sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("Enter Value: ");
        scanf("%d", &item);
        ptr->data = item;
        printf("\n Enter the location: ");
        scanf("%d", &loc);
        temp = head;
        for(i = 1; i<loc; i++)
        {
            temp = temp ->next;
            if(temp == NULL)
            {
                printf("\ncan't insert\n");
                return ;
            }
        }
        ptr ->next = temp -> next;
        temp -> next = ptr;
        printf("item iserted");
    }
}