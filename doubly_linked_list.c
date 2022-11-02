#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
  struct node *prev;
}*head=NULL,*tail=NULL;


int count(){
  struct node *temp = head;
  int counts = 0;
  while(temp!=NULL){
    counts++;
    temp = temp->next;
  }

  return counts;
}

void insert(int data){

struct node *newnode=(struct node*)malloc(sizeof(struct node *));

newnode->data = data;
if(head==NULL){
  head =tail= newnode;
  newnode->next = NULL;
  newnode->prev = NULL;
  printf("1st element inserted\n");
}
else{

newnode->prev=tail;
tail->next = newnode;
tail = newnode;

newnode->next = NULL;
printf("%delement inserted\n", data);
}
}


void insert_beg(int data){
  
struct node *newnode=(struct node*)malloc(sizeof(struct node *));
newnode->data = data;
if (head == NULL)
{
  head = newnode;
  newnode->prev = NULL;
  newnode->next = NULL;
   printf("1st element inserted\n");
}


else{
newnode->prev = NULL;
newnode->next = head;
head->prev = newnode;
head = newnode;
 printf(" element inserted\n");
}

}



void insert_end(int data){
struct node *newnode=(struct node*)malloc(sizeof(struct node *));
newnode->data = data;
if (head == NULL)
{
  head = newnode;
  newnode->prev = NULL;
  newnode->next = NULL;
   printf("1st element inserted\n");
}

else{


  newnode->prev = tail;
  tail->next = newnode;
  tail = newnode;
  newnode->next = NULL;
  printf(" element inserted end\n");
}

}


void insert_spec(int data,int pos){
 struct node *newnode=(struct node*)malloc(sizeof(struct node *));
newnode->data = data;
if (head == NULL)
{
  head = newnode;
  newnode->prev = NULL;
  newnode->next = NULL;
   printf("1st element inserted\n");
}

else{
  struct node *temp = head;
  int i = 1;
  while(i<pos-1){
    temp = temp->next;
    i++;
  }
  temp->next->prev = newnode;
  newnode->next = temp->next;
  temp->next = newnode;
  newnode->prev = temp;
  printf(" element inserted at position %d\n",pos);
}

}
void insert_afterspec(int data,int posss){
struct node *newnode=(struct node*)malloc(sizeof(struct node *));
newnode->data = data;
if (head == NULL)
{
  head = newnode;
  newnode->prev = NULL;
  newnode->next = NULL;
   printf("1st element inserted\n");
}

else{
  struct node *temp = head;
  int i = 1;
  while(i<posss){
    temp = temp->next;
    i++;
  }
  temp->next->prev = newnode;
  newnode->next = temp->next;
  temp->next = newnode;
  newnode->prev = temp;
  printf(" element inserted after position %d\n",posss);
}
}
void delete_beg(){

if(head==NULL){
  printf("insert some node in list");
}

else{
  struct node *temp = head;
  head = head->next;
  head->prev = NULL;
  free(temp);
  //here which add strore in temp that addrees will be free

  printf("node deleted");
}

}

void delete_end(){
if(head==NULL){
  printf("insert some node in list");
}

else{

  struct node *temp = tail;
  tail = tail->prev;
  tail->next = NULL;
  free(temp);
  printf("node deleted");
}

}


void delete_spec(int poss){

if(head==NULL){
  printf("insert some node in list");
}

else{
  int c = count();
  if(poss<c){
  struct node *temp = head;
  int i = 1;
  while(i<poss){
    temp = temp->next;
    i++;
  }

  temp->prev->next = temp->next;
  temp->next->prev = temp->prev;
  free(temp);
  printf("node deleted");
  }
  else{
    printf("cannot be deleted");
  }

  
}

}


void rev(){
  struct node *current=head,*temp1;
  while(current!=NULL){

    temp1 = current->next;

     current->next = current->prev;
    current ->prev = temp1;
    
   
    current = temp1;
  }
  current = head;
  head = tail;
  tail = current;
  printf("node reversed");
}

void display(){

  struct node *temp=head;

  while(temp!=NULL){
    printf("%d",temp->data);
    temp = temp->next;
  }
  //printf("%d", tail->data);
}


int main(){

   int choice = 0, data;
  while (choice!= 12)
  {
    printf("\nenter number");
    printf("1:insert\t2:insert at biggining\t3:insert at end\t4:insert at position\t5:insert at after the position\t6:delete from begginning\t7:delete from end\t8:delete from specific\t9:display\t10:to count node\t:reverse a node");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    printf("\nenter data");
    scanf("%d", &data);
    insert(data);
    break;
    case 2:
    printf("\nenter data");
    scanf("%d", &data);
        insert_beg(data);
      display();
      break;
      
      case 3:
       printf("\nenter data");
    scanf("%d", &data);
        insert_end(data);
        break;

        case 4:
        int pos;
         printf("\nenter data");
         scanf("%d", &data);
         printf("\nenter position");
         scanf("%d", &pos);
    
         insert_spec(data,pos);
        break;


         case 5:
        int posss;
         printf("\nenter data");
         scanf("%d", &data);
         printf("\nenter position");
         scanf("%d", &posss);
    
         insert_afterspec(data,posss);
        break;

         case 6:
         delete_beg();
         break;

         case 7:
           delete_end();
           break;

         case 8:
             int poss;
           scanf("%d", &poss);
           delete_spec(poss);
             break;
         case 9:
           display();
           break;

           case 10:
             int k=count();
             printf("the number of %d", k);
             break;

             case 11:
             rev();
             break;
}
}

}  
