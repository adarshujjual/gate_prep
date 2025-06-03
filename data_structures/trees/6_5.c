//Write a C function to mirror a binary tree (swap left and right children).

/*
Note:
 #What does "mirroring" a binary tree mean?
->> we swap the left and right child of every node in the tree.

ex: original tree :-
       1
     /   \
    2     3
   / \   / \
  4   5 6   7

  mirrored tree:-
       1
     /   \
    3     2
   / \   / \
  7   6 5   4

Solution:
For every node:

>> Mirror its left subtree

>> Mirror its right subtree

>> Swap its left and right children

*/

#include <stdio.h>
#include <stdlib.h>

//defining the structure of a binary tree node
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

//recursive function to mirror a binary tree
void mirrorTree(struct Node* root){
    if(root == NULL){
        return;  //base case:do nothing for NULL nodes
    }
    // Recursively mirror left and right subtrees
    mirrorTree(root->left);
    mirrorTree(root->right);

    //swap the left and right children
    struct Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
}

//function to create a new node with given value
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

//inorder traversal to print tree nodes
void inorder(struct Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

//main function to test
int main(){
    //create the tree
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Inorder before mirroring: ");
    inorder(root);
    printf("\n");

    mirrorTree(root);  //mirroring the binary tree

    printf("Inorder after mirroring: ");
    inorder(root);
    printf("\n");

    return 0;
}

/*
Solution:
>>before mirroring: 4 2 5 1 6 3 7

>>after mirroring: 7 3 6 1 5 2 4
*/