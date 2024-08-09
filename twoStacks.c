#include <stdio.h>
#define SIZE 10

int arr[SIZE];
int top1 = -1;
int top2 = SIZE;

void pushStack1(int data)
{
    if(top1<top2-1)
    {
        arr[top1++] = data;
    }
    else
    {
        printf("Stack Full! cannot Push\n");
    }
}
void pushStack2(int data)
{
    if(top1<SIZE)
    {
        arr[--top2] = data;
    }
    else
    {
        printf("Stack Full ! Cannot Push\n");
    }
}
void popStack1()
{
    if(top1 > 0)
    {
        int popped_value = arr[top1--];
        printf("%d is being popped from the Stack1\n", popped_value);
    }
    else
    {
        printf("Stack is empty! Cannot pop.");
    }
}
void popStack2()
{
    if(top2<SIZE)
    {
        int popped_value = arr[top2++];
        printf("%d is being popped from the Stack2", popped_value);
    }
    else
    {
        printf("Stack is Empty! Cannot Popped.");
    }
}
void display_Stack1()
{
    int i;
    for(i=top1; i>0; --i)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
void display_Stack2()
{
    int i ;
    for(i=top2; i<SIZE; ++i)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[SIZE];
    int i;
    int num;

    printf("We can push a total of 10 values\n");
    for(i=1; i<=6; ++i)
    {
        pushStack1(i);
        printf("Value Pushed in Stack 1 is %d\n", i);
    }
    for(i=1; i<=4; i++)
    {
        pushStack2(i);
        printf("Value Pushed in stack 2 is %d\n", i);
    }

    display_Stack1();
    display_Stack2();
    printf("Pushing value in Stack 1 is %d\n", 11);
    pushStack1(11);
    num = top1+ +1;
    while(num){
        popStack2();
        num--;
    }
    popStack1();
    --num;
    popStack1();
    return 0;

}