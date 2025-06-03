//Write a C function to find the maximum element in a binary tree.

/*
At each node:
>>Find max in left subtree
>>Find max in right subtree
>>Compare those with current node’s value
>>Return the largest of the three
*/

#include <stdio.h>
#include <stdlib.h>

//step 1:defining the structure of a binary tree node
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

//step 2:recursive function to find the maximum element
int findMax(struct Node* root){
    if(root == NULL){
        return -1;//base case:return a minimum value if tree is empty
    }
    //recursively find max in left and right subtrees
    int leftMax = findMax(root->left);
    int rightMax = findMax(root->right);

    //return the maximum of root->data, leftMax, and rightMax
    int max = root->data;
    if(leftMax > max){
        max = leftMax;
    }
    if(rightMax > max){
        max = rightMax;
    }
    return max;
}

//step 3:helper function to create a new node
struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

//step 4:main function to test the tree
int main(){
    // Create the tree manually
    struct Node* root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->right->left = createNode(50);
    root->right->right = createNode(60);

    int maxElement = findMax(root);
    printf("The maximum element in the binary tree is: %d\n", maxElement);

    return 0;
}

/*
notes:
        10
       /  \
      20   30
     /    /  \
    40   50   60

Dry Run:-
>> If at node 10:

>> Left max = max of (20 → 40) → 40

>> Right max = max of (30 → 50, 60) → 60

>> Max = max(10, 40, 60) → 60
*/