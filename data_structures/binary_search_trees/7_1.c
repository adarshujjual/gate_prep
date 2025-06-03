//Write a C function to delete a key from a BST.
/*
To delete a node with value key:

>> If key < root: delete from the left subtree.

>> If key > root: delete from the right subtree.

>> If key == root:

-> Case 1: Node has no children → delete it directly.

-> Case 2: Node has one child → replace node with child.

-> Case 3: Node has two children →

>> Find inorder successor (smallest node in right subtree)

>> Replace current node's data with successor's data

>> Recursively delete the successor
*/

#include <stdio.h>
#include <stdlib.h>

//step 1:defining structure of a BST node
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

//step 2:creating a new BST node
struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

//step 3:finding minimum value node in a BST (used for inorder successor)
struct Node* findMin(struct Node* node){
    while(node && node->left != NULL){
        node = node->left;
    }
    return node;
}

//step 4:deleting a node from BST
struct Node* deleteNode(struct Node* root, int key) {
    if(root == NULL){
        return root;  // Base case: empty tree
    }
    //Traverse left or right based on key
    if(key < root->data){
        root->left = deleteNode(root->left, key);
    }else if(key > root->data){
        root->right = deleteNode(root->right, key);
    }else{
        //Case 1 & 2:node with only one child or no child
        if(root->left == NULL){
            struct Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        //Case 3:node with two children
        struct Node* temp = findMin(root->right);  // Find inorder successor
        root->data = temp->data;  // Replace current data
        root->right = deleteNode(root->right, temp->data);  // Delete successor
    }
    return root;
}

//step 5:inorder traversal(to verify BST structure)
void inorder(struct Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

//step 6:insert function to build BST
struct Node* insert(struct Node* root, int value){
    if(root == NULL){
        return createNode(value);
    }
    if(value < root->data){
        root->left = insert(root->left, value);
    }
    else if(value > root->data){
        root->right = insert(root->right, value);
    }
    return root;
}

//step 7:testing the code
int main(){
    struct Node* root = NULL;
    root = insert(root,50);
    insert(root,30);
    insert(root,70);
    insert(root,20);
    insert(root,40);
    insert(root,60);
    insert(root,80);

    printf("Inorder before deletion:");
    inorder(root);
    printf("\n");

    root = deleteNode(root,50);  //deleting the root node (has two children)

    printf("Inorder after deletion:");
    inorder(root);
    printf("\n");

    return 0;
}

/*
Note:
>>Inorder Successor is used when deleting a node with two children.

>>BST remains valid after deletion.

>>Recursive deletion ensures clean tree structure.
*/
