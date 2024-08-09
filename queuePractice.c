// #include <stdio.h>
// #include <stdlib.h>

// #define MAX 50
// int front = -1;
// int rear = -1;
// int array[MAX];
// int enqueue();
// int display();
// int dequeue();
// int exit();

// int main()
// {
//     int choice;
//     while(1)
//     {
//         printf("1.Enqueue\n2.Display\n3.Dequue\n4.Exit\n");
//         printf("Enter Your choice.");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             enqueue();
//             break;

//         case 2 : 
//             display();
//             break;

//         case 3 : 
//             dequeue();
//             break;
//         case 4 : 
//             exit(1);
//             break;
//         default:
//             printf("Invalid Entry.");
        
//         }
//     }
//     return 0;
// }

// int enqueue()
// {
//     int item;
//     if(rear == MAX-1)
//     {
//         printf("Queue is Overflow");
//     }
//     else
//     {
//         if(front == -1)
//         {
//             front = 0;
//         }
       
//             printf("Enter Element : ");
//             scanf("%d", &item);
//             rear = rear +1;
//             array[rear] = item;
//     }
// }

// int display()
// {
//     int i;
//     if(front == -1)
//     {
//         printf("Queue is Empty.");
//     }
//     else
//     {
//         printf("Element : ");
//         for(i = front; i<=rear; i++)
//         {
//             printf("%d ", array[i]);
//         }
//             printf("\n");

//     }
// }

// int dequeue()
// {
// 	if(front == -1)
// 	{
// 		printf("Queue is UnderFlow.");
// 		return 0;
// 	}
// 	else
// 	{
// 		printf("Dequeue Element : %d\n", array[front]);
// 		front = front +1;
// 	}
// }

#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int front = -1;
int rear = -1;
int arr[MAX];
void enqueue();
void dequeue();
void display();
void exit();
int main()
{
    while(1)
    {
        int choice;
        
        printf("\n1.Enqueue\n2.Display\n3.Dequeue\n4.Exit\n");
        printf("Enter Your Choice.");
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
                break;
            default:
                printf("⚠️ Enter a valid Input : ");
        }

    }
    return 0;
}

void enqueue()
{
    int item;
    if(rear == MAX-1)
    {
        printf("Queue is OverFlow!");
    }
    else
    {
        printf("Enter Elements : ");
        if(front== -1)
            front = 0;  
            scanf("%d", &item);
            rear = rear+1;
            arr[rear] = item;
    }
    printf("\n");
}
void dequeue()
{
    if(front == -1)
    {
        printf("Queue is UnderFlow!");

    }
    else
    {
        printf("Dequeued Elements : %d", arr[front]);
        front = front +1;
    }
    printf("\n");
}
void display()
{
    if(front == -1)
    {
        printf("Queue is Empty");
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
void exit();

