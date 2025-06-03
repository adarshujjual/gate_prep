/*
Write a C function to perform inorder traversal of a BST (which will give sorted order).
Inorder transversal: Left → Root → Right
In a BST, this visits nodes in ascending sorted order.
*/

#include <stdio.h>
#include <stdlib.h>

//defining the structure for a BST node
typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

//creating a new node
Node* createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

//inserting a node into the BST
Node* insert(Node* root, int data){
    if(root == NULL){
        return createNode(data);
    }
    if(data < root->data){
        root->left = insert(root->left, data);
    }else{
        root->right = insert(root->right, data);
    }
    return root;
}

//perform inorder traversal (Left → Root → Right)
void inorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

//main
int main(){
   
    Node* root = NULL;
    root = insert(root,20);
    insert(root,10);
    insert(root,30);
    insert(root,5);
    insert(root,15);

    printf("Inorder traversal(sorted ascending order):");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
 

 /*
Constructed BST:
          20
         /  \
       10    30
      /  \
     5   15

Expected Output (Inorder): 5 10 15 20 30
*/