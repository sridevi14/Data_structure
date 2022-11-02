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
  newnode->left = NULL;
  }
  return newnode;
};


void printelement(struct node *root){

  if(root==NULL){
    printf("<--empty-->\n");
    return;
  }
  printf("root:%d\n", root->data);
  printf("print left element:\n");
 //printf("print right element");
  printelement(root->left);
  printf("print right element:\n");
  printelement(root->right);
}
int main(){
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

  printelement(root);
  return 0;}