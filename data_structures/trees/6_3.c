//Write a C function to check if a binary tree is balanced.

/*
>>A binary tree is balanced if for every node in the tree the height difference between its left and right 
  subtree is at most 1.

>> A binary tree is balanced if:
[  abs(height(left subtree) - height(right subtree)) <= 1  ] ...for every node in the tree.

*/

#include <stdio.h>
#include <stdlib.h>

//defining the structure of a binary tree node
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

//helper function to get height and check balance
int checkBalanced(Node* root,int* isBalanced){
    if(root == NULL){
        return -1;  //eight of empty tree is -1
    }
    int leftHeight = checkBalanced(root->left, isBalanced);
    int rightHeight = checkBalanced(root->right, isBalanced);

    //if any subtree is unbalanced, mark the whole tree as unbalanced
    if(abs(leftHeight - rightHeight) > 1){
        *isBalanced = 0;
    }

    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

//main function to check if the tree is balanced
int isTreeBalanced(Node* root){
    int isBalanced = 1;
    checkBalanced(root, &isBalanced);
    return isBalanced;
}


int main(){
    
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);

    if (isTreeBalanced(root))
        printf("The binary tree is balanced.\n");
    else
        printf("The binary tree is NOT balanced.\n");

    return 0;
}

/*
    Example balanced tree:
              1
             / \
            2   3
           / 
          4

Using checkBalanced() to compute the height of each subtree.

And passing an isBalanced flag by reference to track imbalance.

The overall time complexity is O(n).

*/