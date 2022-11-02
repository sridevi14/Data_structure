#include <stdio.h>
#include<stdlib.h>
#define N 5
int front =-1;
int rear = -1;
int queue[N];

//insert an element to queue
void enqueue(int a){
if((rear+1)%N==front){
  printf("overflow!!!!");
}
else if(rear==-1 && front==-1){
  front = rear = 0;
  queue[rear] = a;
    printf("element pushed!!!!");
}
else{
  rear = (rear + 1) % N;
  queue[rear] = a;
  printf("element pushed!!!!\n");
}
  printf("\n");
}

// display elements in queue
void display(){
  if(rear==-1 && front==-1){
    printf("underflow!!!!");
  }
  else{
    printf("the elemets are in the queue");
    for (int i = front; i !=rear;i=(i+1)%N){
      printf("%d", queue[i]);
    }
    printf("%d", queue[rear]);
  }

  printf("\n");
}

//peek element in the stack
void peek(){
  if(rear==-1 && front==-1){
    printf("underflow!!!!");
  }
  else{
    
      printf("\npeek value is:%d", queue[front]);
    
  }
}

//dequeue element
void dequeue(){
  if(rear==-1 && front==-1){
    printf("underflow");
  }
  else if(front==rear){
     printf("the dequeue element is %d", queue[front]);
    front = -1;
    rear = -1;
  }
  else{
    printf("the dequeue element is %d", queue[front]);
   front= (front+1)%N;
  }
 }



void main(){

 

 int ch;

 do{
   printf("enter your choice  1=enqueue 2=dequeue 3=display 4=peek 5=exit");
   scanf("%d", &ch);
   switch (ch)
   {
       case 1:{
            printf("enter the element to push to queue");
            int a;
            scanf("%d", &a);
            enqueue(a);
            break;}
       case 2:
       {
            dequeue();
            break;}
       case 3:{
            display();
            break;}
       case 4:
       {
            peek();
            break;
            }
      case 5:{
        exit(0);
        break;
      }
      
        default:
          printf("wrong choice");
}

 } while (ch != 5);
}