#include<stdio.h>
#include<stdlib.h>



struct node {

  int data;
  struct node *left;
  struct node *right;
};

struct node *createnode(int value){

  struct node *newnode = malloc(sizeof(struct node));
  if(newnode!=NULL){
  newnode->data = value;
  newnode->right=NULL;
  newnode->left = NULL;}
  return newnode;
}


void printelement_preorder(struct node *root){

  if(root==NULL){
    //printf("<--empty-->\n");
    return;
  }
  printf("root:%d\n", root->data);
 // printf("print left element:\n");
  printelement_preorder(root->left);
  //printf("print right element:\n");
  printelement_preorder(root->right);
}

void printelement_inorder(struct node *root){

  if(root==NULL){
   // printf("<--empty-->\n");
    return;
  }
  
  //printf("print left element:\n");
  printelement_inorder(root->left);
  printf("root:%d\n", root->data);
  //printf("print right element:\n");
  printelement_inorder(root->right);
}


void printelement_postorder(struct node *root){

  if(root==NULL){
   // printf("<--empty-->\n");
    return;
  }
  
  //printf("print left element:\n");
  printelement_postorder(root->left);
  
  //printf("print right element:\n");
  printelement_postorder(root->right);
  printf("root:%d\n", root->data);
}

void order(int val){
 
  struct node *root = NULL;
  root= createnode(1);
  struct node *a = createnode(2);
  struct node *b = createnode(3);
  struct node *c = createnode(4);
  struct node *d = createnode(5);

  root->left = a;
  root->right = b;
  a->left = c;
  a->right = d;
if(val==1){
printelement_preorder(root);
}
else if(val==2){
  printelement_inorder(root);
}
else if(val==3){
  printelement_postorder(root);
}
  
}
int main(){

  int choice = 0;
  while (choice != 10)
  {
    printf("\nenter number");
 
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      order(1);
      break;
    case 2:
      order(2);
      break;
     case 3:
       order(3);
       break;
}
}



  return 0;
}