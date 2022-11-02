#include<stdio.h>
#include<stdlib.h>
  void create(int);
  void display();
  void  insert_beg(int);
  void insert_end(int);
  void  insert_loc(int,int);
  int count();
  void  delete_beg();
  void  delete_end();
  void  delete_spec(int);
  void reverse();
  struct node
  {

    int data;
    struct node *next;
   };
struct node *head;
int main()
{

  int choice = 0, data;
  while (choice != 10)
  {
    printf("\nenter number");
 
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    printf("\nenter data");
    scanf("%d", &data);
    create(data);
    break;


case 2:
    printf("\nenter data");
        scanf("%d", &data);
  insert_beg(data);
  break;

  case 3:
    printf("\nenter data");
        scanf("%d", &data);
  insert_end(data);
  break;

  case 4:
    printf("\nenter data");
        scanf("%d", &data);
        int loc;
            printf("\nenter location");
                  scanf("%d", &loc);
        insert_loc(data, loc);
        break;

         case 5:
     delete_beg();
        break;
        
         case 6:
     delete_end();
        break;
case 7:
int loc_delete;
printf("enter the node number that u want to delete");
scanf("%d", &loc_delete);
delete_spec(loc_delete);
break;


case 8:
 reverse();
 break;


    case 9:
      display();
      break;
}
}



}

//to create linked list

void create(int data){
  struct node *newnode = malloc(sizeof(struct node));
  newnode->data = data;

  if(head==NULL){
    head = newnode;
      newnode->next = NULL;
    printf("\nfirst node is inserted");
  }
  else{
    struct node *temp;
    temp = head;
    while(temp->next!=NULL){
      temp = temp->next;
    }
    temp->next = newnode;

    newnode->next = NULL;
    printf("\nnode is inserted");
  }
}

//to insert at begginig
void  insert_beg(int data){

struct node *newnode = malloc(sizeof(struct node));
  newnode->data = data;
   newnode->next = NULL;
    if(head==NULL){
    head = newnode;
   
    printf("\nfirst node is inserted");
  }
  else{
    newnode->next = head;
    head = newnode;
        printf(" \nnode  inserted at beggining");
  }

}


// //insert at end

 void insert_end(int data){
  struct node *newnode = malloc(sizeof(struct node));
  newnode->data = data;
   newnode->next = NULL;
    if(head==NULL){
    head = newnode;
   
    printf("\nfirst node is inserted");
    }


    else{
      struct node *temp = head;
     while(temp->next!=NULL){
       temp = temp->next;
     
  }
    temp ->next = newnode;
       printf(" \nnode is inserted at last");
    }
  
 }

///insert at specific location
void insert_loc(int data, int loc){

  int i = 1;
  struct node *newnode = malloc(sizeof(struct node));
  newnode->data = data;
   newnode->next = NULL;
    
    int coun = count();
    if (loc >coun){
      printf("\ninvalid position");
    }

    else{
      struct node *temp;
      temp = head;
      while(i<loc){
        temp = temp->next;
        i++;
      }
      newnode->next = temp->next;
      temp->next = newnode;
    
    }

}

//delete at beg
     void  delete_beg(){

       struct node *temp;
       temp=head;
if(temp==NULL){
  printf("\ntry to create node....the list is empty");
}
else{
       head = head->next;

       free(temp);
       printf("a node is deleted from beggining");}
     }
//delete at end
void  delete_end(){
struct node *temp,*ptr;
       temp=head;
if(temp==NULL){
  printf("\ntry to create node....the list is empty");
}
else{

  if(head->next==NULL){
    temp = head;
    head = NULL;
    free(temp);
  }else{
      while(temp->next!=NULL){
        ptr = temp;
        temp = temp->next;
      }
  
      ptr->next = NULL;
      free(temp);
     
      }
      
       printf("\nend node is deleted");
      
      }
     


}

//delete at specific
  void  delete_spec(int loc){
    struct node *temp,*ptr;
      int i = 1;
    temp=head;
    if(temp==NULL){
      printf("list is empty now....try to add node to our list");
    }
    else{
    
      while(i<loc-1){

        temp = temp->next;
        i++;
          if(temp == NULL)  
            {  
                printf("\nThere are less than %d elements in the list..\n",loc);  
                return;  
            }  
      }
      // ptr = temp->next;
     temp->next = temp->next->next;
    

      printf("deleted");
    }



  }


//to display items
void display(){
   int count=0;
  struct node *temp;
  temp = head;
 if(temp==NULL){
   printf("nothing ");
 }else{
  while(temp!=NULL){
    printf("data%d", temp->data);
    temp = temp->next;
    count++;
  }
  printf("\nthe number of node is:%d", count);}
}

//count the node
int count(){
  
  struct node *temp;
   int count=0;
  temp = head;

  while(temp!=NULL){
  
    temp = temp->next;
      count++;
  }
  printf("\nthe number of node is:%d", count);
  return count;

}



//reverse a list
void reverse(){
  struct node *current,*prev,*nextnode;
  prev= NULL;
  current=nextnode=head;
  while(nextnode!=NULL){
    nextnode = nextnode->next;
    current->next = prev;
    prev = current;
    current = nextnode;
  }
  head = prev;
 
}  