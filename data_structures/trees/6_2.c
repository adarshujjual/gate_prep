//Write a C function to calculate the height of a binary tree.

/*
Notes:
##What is the Height of a Binary Tree?

--> The height of a binary tree is the number of edges on the longest path from the root to a leaf node.

    A tree with only a root node has height 0.

    An empty tree has height -1 (or sometimes 0, based on convention — both are acceptable if consistently used).


##Steps to Calculate Height(Recursively):

 >If the node is NULL, return -1.

 >Recursively find the height of the left subtree.

 >Recursively find the height of the right subtree.

 >Height of current node = 1 + max(leftHeight, rightHeight).

*/

#include <stdio.h>
#include <stdlib.h>

//defining the structure of a binary tree node
typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

//function to create a new node
Node* createNode(int data){
    Node* newNode =(Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left =newNode->right = NULL;
    return newNode;
}

//recursive function to calculate the height of the tree
int getHeight(Node* root){
    if (root == NULL){
        return -1; //or return 0 if you define height of empty tree as 0
    }
    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    int maxHeight;
    if(leftHeight > rightHeight){
        maxHeight = leftHeight;
    }else{
        maxHeight = rightHeight;
    }

    return 1 + maxHeight; //add 1 for the current node level
}

//main 
int main(){
    
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    int height = getHeight(root);
    printf("Height of the binary tree:%d\n",height);

    return 0;
}

/*
Constructed binary tree:
              1
             / \
            2   3
           / \
          4   5

Longest path: 1 → 2 → 4 or 1 → 2 → 5

Number of edges: 2

So, height = 2

Thus::::::::///
Base Case: If node is NULL, height is -1 (or 0).

Recursive Step: height = 1 + max(left, right)

Time Complexity: O(n) where n = number of nodes.
*/