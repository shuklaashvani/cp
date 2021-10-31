#include<stdio.h>
#include<stdlib.h>

typedef struct Tree{
    int data;
    struct Tree *left;
    struct Tree *right;
}Tree;

Tree *root=NULL;

void tree_insert(int n){
   Tree *node;
   node = (Tree*)malloc(sizeof(Tree));
   node->data=n;
   node->left=NULL;
   node->right=NULL;

      if(root==NULL){
        root = node;   
      }
      else{
        Tree *tmp = root;
        
          while(tmp!=NULL){
              if(tmp->right==NULL && n>tmp->data){
                  tmp->right = node;
                  return ;
              }
              else if(tmp->left==NULL && n<tmp->data) {
                tmp->left= node;
                return ;
              }
              if(n < tmp->data ){
                  tmp = tmp->left;
              }
              else{
                tmp = tmp->right;
              }
          }
      }
}

void find(int n){
  Tree *tmp = root;
   if(root == NULL){
     printf("Sorry! no Tree found");
     return;
   }
  while(tmp!=NULL) {
      if(tmp->data==n){
          printf("Your data is available");
          return ;
      }
      else if(n < tmp->data){
        tmp=tmp->left;
      }
      else if(n > tmp->data){
        tmp = tmp->right;
      }      
  }
  printf("Sorry! your data is not available.");
}

void main(){
   tree_insert(5);
   tree_insert(3);
   tree_insert(7);
   find(8);
}