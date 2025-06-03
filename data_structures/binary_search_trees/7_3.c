//Write a C function to check if a given binary tree is a BST.

/*
#To check whether a binary tree is a BST (Binary Search Tree) must ensure that:

>> For every node, all values in its left subtree are less, and all values in its right subtree are greater.

Approach:-(Using Recursive Min-Max Check):-
>> Pass down a valid range (min, max) to each node:

>> Left child must be less than current node

>> Right child must be greater than current node
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//defining structure for a binary tree node
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

//creating a new node
struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

//recursive function to check if a tree is a BST
int isBSTUtil(struct Node* root, int min, int max){
    if(root == NULL){
        return 1; //an empty tree is a BST
    }
    //node’s value must be within the range(min,max)
    if(root->data <= min || root->data >= max){
        return 0;
    }
    //check left and right subtrees recursively with updated range
    return isBSTUtil(root->left, min, root->data) && isBSTUtil(root->right, root->data, max);
}

//wrapper function:
int isBST(struct Node* root){
    return isBSTUtil(root,INT_MIN,INT_MAX);
}

//main fun to test the code
int main(){

    struct Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);
    root->left->left = createNode(2);
    root->left->right = createNode(8);

    if(isBST(root)){
        printf("This tree is a Binary Search Tree (BST).\n");
    }else{
        printf("This tree is NOT a Binary Search Tree (BST).\n");
    }
    return 0;
}
/*
 //manually building this tree:
            10
           /  \
          5    20
         / \
        2   8

*/