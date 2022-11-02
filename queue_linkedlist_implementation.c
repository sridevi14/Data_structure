#include <stdio.h>
#include<stdlib.h>


struct node {
int data;
struct node *next;

};

struct node *front = NULL;
struct node *rear=NULL;


 void enqueue(int data){

   struct node *newnode = malloc(sizeof(struct node));
   newnode->data=data;
   newnode->next = NULL;
   if(rear==NULL){
     front = rear = newnode;
   }
   else{
     rear->next = newnode;
     rear = newnode;
   }
   printf("element inserted");
 }

 void dequeue(){
   int d;
   if ((front == NULL) && (rear == NULL))
   {
     printf("underflow");
}
else if(front==rear){
struct node *temp=front;
d = temp->data;
front=rear=NULL;
free(temp);
}
else{
  struct node *temp=front;
  d = temp->data;
  front = front->next;
  free(temp);
}

printf("element deleted%d", d);
 }




void display(){

struct node *temp=front;
while(temp!=NULL){
printf("%d",temp->data);
temp = temp->next;
}

}





void peek(){
  if ((front == NULL) && (rear == NULL))
   {
     printf("underflow");
}
else{
  printf("%d", front->data);
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