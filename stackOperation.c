#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;

};
int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("Stack is OverFlow!");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
void peek(struct stack* sp, int i)
{
    int arrayInd = sp->top-i+1;
    if(arrayInd < 0)
    {
        printf("Not a valid position for stack.\n");
        return -1;
    }
    else
    {
        return sp->arr[arrayInd];
    }
}
int main()
{
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp-> size = 50;
    sp-> top = -1;
    sp->arr = (int*)malloc(sp->size *sizeof(int));
    printf("%d\n", isFull(sp));
    printf("%d", isEmpty(sp));
    push(sp, 45);
    push(sp, 54);
    push(sp, 87);
    push(sp, 47);
    for(int j = 1; j<=sp->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, peek(sp, j)); 
    }
    return 0;

    
}