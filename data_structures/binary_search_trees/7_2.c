//Write a C function to find the inorder successor of a node in a BST.
/*
#What is the Inorder Successor?
-->> The inorder successor of a node in a BST is the node with the smallest key greater than the given node.

#Two Scenarios to Handle:
 Given a node target:
>> If target has a right subtree → successor is the minimum node in the right subtree.
>> If target has no right subtree → successor is the lowest ancestor for which target lies in its left subtree.
*/
#include <stdio.h>
#include <stdlib.h>

//defining a BST node
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

//creating a new node
struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

//insert into BST
struct Node* insert(struct Node* root, int value){
    if (root == NULL)
        return createNode(value);
    if (value < root->data)
        root->left = insert(root->left,value);
    else if (value > root->data)
        root->right = insert(root->right,value);
    return root;
}

//finding the node with minimum value(leftmost node)
struct Node* findMin(struct Node* root){
    while(root && root->left != NULL){
        root = root->left;
    }
    return root;
}

//finding the inorder successor of a node with given key
struct Node* inorderSuccessor(struct Node* root, struct Node* target){
    if(target->right != NULL){
        return findMin(target->right);  //case 1:right subtree exists
    }
    //case 2:no right subtree — traverse from root to find successor
    struct Node* successor = NULL;
    while(root != NULL){
        if(target->data < root->data){
            successor = root;
            root = root->left;
        }
        else if(target->data > root->data){
            root = root->right;
        }
        else{
            break;
        }
    }
    return successor;
}

//search for a node by value
struct Node* search(struct Node* root, int key){
    if(root == NULL || root->data == key){
        return root;
    }
    if(key < root->data){
        return search(root->left, key);
    }else{
        return search(root->right, key);
    }
}

//main function to test
int main(){
    struct Node* root = NULL;
    root = insert(root,20);
    insert(root,8);
    insert(root,22);
    insert(root,4);
    insert(root,12);
    insert(root,10);
    insert(root,14);

    struct Node* target = search(root,12);
    struct Node* succ = inorderSuccessor(root,target);

    if(succ != NULL){
        printf("Inorder successor of %d is %d\n",target->data,succ->data);
    }else{
        printf("Inorder successor does not exist\n");
    }
    return 0;
}



