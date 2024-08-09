// #include <stdio.h>
// #define MAX 50

// void enqueque();
// void display();
// void dequeue();
// int array[MAX];
// int rear = -1;
// int front = -1;

// int main()
// {
//     int add_item;
//     int choice;
//     // enque();
//     while (1)
//     {
//         printf("1.Enqueue \n2.Display \n3.Dequeue\n Enter choice : ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             enqueque();
//             break;
//         case 2:
//             display();
//             break;
//         case 3:
//             dequeue();
//             break;
//         default:
//             printf("Invalid Entry.");
//         }
//     }
//     return 0;
// }

// // void enque()
// // {
// //     int add_item;
// //     if(rear== MAX-1)
// //     {
// //         printf("Queue is Overflow.");
// //     }
// //     else
// //     {
// //         if(front == -1)
// //         front = 0;
// //         printf("Insert the element in queue : ");
// //         scanf("%d", &add_item);
// //         rear = rear + 1;
// //         array[rear] = add_item;
// //     }
// // }

// // void display(){
// //    int i;
// //    if (front == - 1)
// //       printf("\nQueue is empty ");
// //    else{
// //       printf("Queue is : ");
// //       for (i = front; i <= rear; i++)
// //          printf("%d ", array[i]);
// //          printf("\n");
// //    }
// // }

// void enqueque()
// {
//     int item;
//     if (rear == MAX - 1)
//     {
//         printf("Queue is overflow.");
//     }
//     else
//     {
//         if (front == -1)
//             front = 0;
//         printf("Enter Element in Queue : ");
//         scanf("%d", &item);
//         rear = rear + 1;
//         array[rear] = item;
//     }
// }

// void display()
// {
//     int i;
//     if (front == -1)
//         printf("Queue is empty.");
//     else
//         printf("Elements : ");
//         for (i = front; i <= rear; i++)
//         {
//             printf("%d ", array[i]);

//         }
//         printf("\n");
// }

// void dequeue()
// {
//     if (front == -1)
//     {
//         printf("Queue is underflow");
//         return;
//     }
//     else
//     {
//         printf("Element deleted : %d ", array[front]);
//         array[front] = front + 1;
//     }
// }

// #include <stdio.h>
// #define MAX 55

// int array[MAX];
// int front = -1;
// int rear = -1;
// void enQueue();
// void display();
// void deQueue();

// int main()
// {
//     int choice;
    
    
//     while(1)
//     {
//         printf("1.Enqueue.\n2.Display. \n3.Dequeue.\n");
//         printf("Enter Your choice ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             enQueue();
//             break;

//         case 3:
//             deQueue();
//             break;

//         case 2:
//             display();
//             break;

//         default:
//             printf("Invalid Entry.");
//         }
//     }
//     return 0;
// }

// void enQueue()
// {
//     int item;
//     if(rear == MAX-1)
//     {
//         printf("Queue is overflow.");
//     }
//     else
//     {
//         if(front == -1)
//         front = 0;
//         printf("Enter elements :");
//         scanf("%d", &item);
//         rear = rear + 1;
//         array[rear] = item;
//     }
// }
// void display()
// {
//     int i;
//     if(front == -1)
//     printf("Queue is Empty.");
//     else
//     printf("Elements : ");
//     for(i = front; i<=rear; i++)
//     {
//         printf("%d ", array[i]);

//     }
//     printf("\n");
// }
// void deQueue()
// {
//     if(front == -1 || front > rear){
//     printf("Queue is underflow.");
//     return;
//     }
//     else
//     {
//     printf("Dequeued Element : %d", array[front]);
//     front = front + 1;
//     printf("\n");
//     }
// }


#include <stdio.h>
#define MAX 50

int front = -1;
int rear = -1;
int arr[MAX];
void exit();

void enqueue()
{
    int item;
    if(rear == MAX-1)
    {
        printf("Queque is OverFlow.");
    }
    else{
        if(front == -1)
        front = 0;
        printf("Enter Element to insert in Queue : ");
        scanf("%d", &item);
        rear = rear +1;
        arr[rear] = item;
    }
}
void display()
{
    if(front == -1)
    {
        printf("Queue is empty.");
    }
    else
    {
        printf("Elements : ");
        for(int i = front; i<=rear; i++)
        {
            printf("%d ", arr[i]);
            
        }
        printf("\n");
    }

}
void dequeue()
{
    if(front == -1)
    {
        printf("Queue is Underflow.");

    }
    else
    {
        printf("Dequeued Elements :  %d\n", arr[front]);
        front = front +1;

    }
}

int main()
{
    int choice;
   
    while(1)
    {
        printf("1.Enqueu\n2.Display\n3.Delete\n4.Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: 
                enqueue();
                break;
            case 2: 
                display();
                break;
            case 3:
                dequeue();
                break;
            case 4:
                exit(1);
            default:
                printf("⚠️Enter a valid Input.");
        }
    }

}