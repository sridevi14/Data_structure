#include<stdio.h>
#include<stdlib.h>



struct node
{
  int data;
  struct node *next;
};
struct node *top = NULL;

void push(){
  printf("enter data");
  int data;
  struct node *newnode = (struct node*)malloc(sizeof(struct node));
  scanf("%d", &data);
  newnode->data = data;
  if(top==NULL){
    newnode->next = NULL;
  }
  else{
  newnode->next = top;}
  top = newnode;
  printf("inserted");
}

void pop(){
  if(top==NULL){
    printf("stack is underflow");
  }
  else{
  struct node *temp = top;
  int data = top-> data;
  top = top->next;
  free(temp);
  
  printf("the element %d popped", data);
  
  }
}


void display(){
if(top==NULL){
    printf("stack is underflow");
  }
  else{
    struct node *temp = top;
    while (temp!= NULL)
    {
      printf("%d", temp->data);
      temp = temp->next;
  }

  
  }
}


void peek(){
  if(top==NULL){
    printf("stack is underflow");
  }
  else{

    printf("the peek element is%d", top->data);
  }
}
int main(){

  int choice = 0;

  
   printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.PEEK\n\t 5:EXIT");

   do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }

            case 4:
            {
              peek();
              break;
            }
            case 5:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4/5)");
            }
                
        }
    }
    while(choice!=5);


  return 0;
}