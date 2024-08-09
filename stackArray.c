// #include <stdio.h>

// #define MAX_SIZE 3
// int stack[MAX_SIZE];
// int top = -1;

// void push(int item)
// {
//     if(top == MAX_SIZE -1)
//     {
//         printf("OverFlow & Exit");
//     }
//     else{
//         stack[++top] =item;
//         printf("%d Item Inserted : \n", item);
//     }
// }

// void pop()
// {
//     if(top == -1)
//     {
//         printf("UnderFlow & Exit\n");53
//     }
//     else
//     {
//         int item = stack[top--];
//         printf("%d Item Deleted. \n", item);
//     }
// }
// void display()
// {
//     if(top == -1)
//     {
//         printf("The stack is empty : \n");
//     }
//     else
//     {
//         printf("Stack elements : ");
//         for(int i = 0; i<= top; i++)
//         {
//             printf("%d", stack[i]);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int choice, item;
//     printf("1. Push \n 2. Pop \n 3. Display \n 4. Exits");
//     while(1)
//     {
//         printf("Enter Your Choice : ");
//         scanf("%d", &choice);

//         switch(choice)
//         {
//             case 1:
//                 printf("Enter value to push");
//                 scanf("%d", &item);
//                 push(item);
//                 break;

//             case 2:
//                 pop();
//                 break;

//             case 3:
//                 display();
//                 break;

//             case 4:
//                 return 0;

//             default:
//             printf("Invalid Choice !");

//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 10

int top = -1;
int stack[MAX];

void push()
{
    int item;
    if (top == MAX)
    {
        printf("Stack is Overflow ! You cannot enter more value !");
    }
    else
    {
        printf("Enter Elements : ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
    }
}

void pop()
{
    int item;
    if (top == -1)
    {
        printf("Stack is UnderFlow ! You cannot delete element !");
    }
    else
    {
        item = stack[top];
        top--;
        printf("Poped Elements : %d", item);
    }
}
void peek()
{
    if (top == -1)
    {
        printf("Stack is Empty!");
    }
    else

    {
        printf("Elements of Stacks : ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
    }
}
int main()
{

    while (1)
    {
        int choice;
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Exit\n");
        printf("Enter Your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            char n;
            printf("Do you want to exit ? ");
            printf ("Enter y or n");
            scanf("%c", &n);

            if("y" == n)
            return 0;
            else 
            return 1;
        default:
            printf("Enter a valid Input.");
        }
    }
    return 0;
}
