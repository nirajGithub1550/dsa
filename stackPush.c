// #include <stdio.h>  
// #include <stdlib.h>  
// #define SIZE 4  
// int top = 2, inp_array[SIZE];
// inp_array = {4,5,6,8};   
// void pop();  
// void show();  
// int main()  
// {  
//     int choice;  
//     while (1)  
//     {  
//         printf("\nPerform operations on the stack:");  
//         printf("\n1.Pop the element\n2.Show\n3.End");  
//         printf("\n\nEnter the choice: ");  
//         scanf("%d", &choice);  
//         switch (choice)  
//         {  
//         // case 1:  
//         //     push();  
//         //     break;  
//         case 1:  
//             pop();  
//             break;  
//         case 2:  
//             show();  
//             break;  
//         case 3:  
//             exit(0);  
//         default:  
//             printf("\nInvalid choice!!");  
//         }  
//     }  
// }  

// void pop()  
// {  
//     if (top == -1)  
//     {  
//         printf("\nUnderflow!!");  
//     }  
//     else  
//     {  
//         printf("\nPopped element: %d", inp_array[top]);  
//         top = top - 1;  
//     }  
// }  
// void show()  
// {  
//     if (top == -1)  
//     {  
//         printf("\nUnderflow!!");  
//     }  
//     else  
//     {  
//         printf("\nElements present in the stack: \n");  
//         for (int i = top; i >= 0; --i)  
//             printf("%d\n", inp_array[i]);  
//     }  
// }  






#include<stdio.h>
#include<process.h>
#include<stdlib.h>

#define MAX 5	//Maximum number of elements that can be stored

int top=-1,stack[MAX];
void push();
void pop();
void display();

void main()
{
	int ch;
	
	while(1)	//infinite loop, will end when choice will be 4
	{
		printf("\n*** Stack Menu ***");
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("\n\nEnter your choice(1-4):");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			
			default: printf("\nWrong Choice!!");
		}
	}
}

void push()
{
	int val;
	
	if(top==MAX-1)
	{
		printf("\nStack is full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nDeleted element is %d",stack[top]);
		top=top-1;
	}
}


void display()
{
	int i;
	
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is...\n");
		for(i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}