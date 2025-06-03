//Write a C function to find the minimum value in a BST.

/*
Notes:
In a BST, the leftmost node contains the minimum value.
Because:All nodes in the left subtree are smaller than the root,so we just keep going left until we can’t anymore.

*/

#include <stdio.h>
#include <stdlib.h>

//defining the structure of a BST node
typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

//create a new node
Node* createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

//function to insert a node into BST
Node* insert(Node* root,int data){
    if(root == NULL){
        return createNode(data);
    } 
    if(data < root->data){
        root->left = insert(root->left,data);
    }else{
        root->right = insert(root->right,data);
    }
    
    return root;
}

//function to find the minimum value in a BST
int findMin(Node* root){
    if(root == NULL){
        printf("Tree is empty!\n");
        return -1; //or any sentinel value to indicate an error
    }

    Node* current = root;
    while(current->left != NULL){
        current = current->left;
    }

    return current->data;
}

//main
int main(){

    Node* root = NULL;
    root = insert(root,20);
    insert(root,10);
    insert(root,30);
    insert(root,5);
    insert(root,15);

    int minVal = findMin(root);
    printf("Minimum value in BST: %d\n",minVal);

    return 0;
}

 /*
    Constructed BST:
          20
         /  \
       10    30
      /  \
     5   15


*/
