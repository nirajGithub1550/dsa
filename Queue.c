#include <stdio.h>
#define MAX 50
void insert();
void display();
void delete();
void exit();
int array[MAX];
int rear = - 1;
int front = - 1;
int main(){
   int add_item;
   int choice;
   while (1){
      printf("1.Insert element to queue ");
      printf("2.Delete an element from queue");
      printf("3.Display elements of queue ");
      printf("4.Quit ");
      printf("Enter your choice : ");
      scanf("%d", &choice);
      switch (choice){
         case 1:
            insert();
         break;
         case 2:
            delete();
         case 3:
            display();
         break;
         case 4:
            exit(1);
         default:
         printf("Wrong choice ");
      }
   }
   return 0;
}
void insert(){
   int add_item;
   if (rear == MAX - 1)
      printf("Queue Overflow ");
   else{
      if (front == - 1)
      /*If queue is initially empty */
      front = 0;
      printf("Inset the element in queue : ");
      scanf("%d", &add_item);
      rear = rear + 1;
      array[rear] = add_item;
   }
}
void display(){
   int i;
   if (front == - 1)
      printf("Queue is empty ");
   else{
      printf("Queue is : ");
      for (i = front; i <= rear; i++)
         printf("%d ", array[i]);
         printf("\n");
   }
}
void delete(){
   if (front == - 1 || front > rear){
      printf("Queue Underflow ");
      return ;
   }
   else{
      printf("Element deleted from queue is : %d",array[front]);
      front = front + 1;
   }
}