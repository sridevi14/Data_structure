#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *left;
  struct node *right;
};
struct node * create(){
  int val;
  struct node *newnode = malloc(sizeof(struct node));
  printf("enter the root data");

  scanf("%d", &val);
  newnode->data = val;

if(val==-1){
  return 0;
}
printf("enter left child %d", val);
newnode->left = create();

printf("enter right child %d", val);
newnode->right = create();
return newnode;
}

void print_element(struct node * root){

if(root==NULL){
  printf("<--empty tree-->\n");
  return;
}
else{
  printf("root is:%d\n", root->data);
  printf("left element\n");
  print_element(root->left);
  printf("right element\n");
  print_element(root->right);
  
}}
int main(){
  struct node *root;
  root = create();
     print_element(root);
  return 0;
}