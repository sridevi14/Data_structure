#include<stdio.h>
int top = -1,stack[100],n;



///push
void push(){
  printf("enter the value to push");
  int data;
  scanf("%d",&data);
  if(top>=n-1){
    printf("stack is ovver flow");
  }
  else{
    top++;
    stack[top] = data;
    printf("\nelement pushed in the stack");
  }
}


void pop(){
if(top==-1){
  printf("stack is underflow");
}
else{
  printf("the eelement %d is popped", stack[top]);
  top--;

}
}

void display(){
if(top==-1){
  printf("stack is underfow");
}
else{
  for (int i = top; i >= 0;i--){
    printf("%d", stack[i]);
  }
}
}


void peek(){
  if(top==-1){
    printf("stack is underfow");
  }
  else{
    printf(" \nthe peek element is%d", stack[top]);
  }
}
int main(){

  int choice = 0;
// printf("%d", *(a+1));
printf("enter the size of stack less than 100 ");
scanf("%d", &n);
printf("\n\t--------------------------------");
printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.PEEK\n\t 5:EXIT");

do
{
  printf("\n Enter the Choice:");
  scanf("%d", &choice);
  switch (choice)
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
    printf("\n\t Please Enter a Valid Choice(1/2/3/4/5)");
  }
  }
    }
    while(choice!=5);
} 
  