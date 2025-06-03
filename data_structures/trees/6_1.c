//Write a C function to perform level-order traversal of a binary tree.

#include <stdio.h>
#include <stdlib.h>

//define a node in the binary tree
typedef struct Node{
    int data;
    struct Node *left, *right;
}Node;

//create a new tree node
Node* createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory error\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

//define a queue node to hold tree nodes
typedef struct QueueNode{
    Node* treeNode;
    struct QueueNode* next;
}QueueNode;

//define the queue structure
typedef struct{
    QueueNode *front, *rear;
}Queue;

//create and initialize a queue
Queue* createQueue(){
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}

//enqueue a tree node into the queue
void enqueue(Queue* q,Node* node){
    QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));
    temp->treeNode = node;
    temp->next = NULL;
    if(q->rear == NULL){
        q->front = q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
}

//dequeue a tree node from the queue
Node* dequeue(Queue* q){
    if (q->front == NULL) return NULL;
    QueueNode* temp = q->front;
    Node* node = temp->treeNode;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    free(temp);
    return node;
}

//check if the queue is empty
int isQueueEmpty(Queue* q){
    return q->front == NULL;
}

//perform level-order traversal
void levelOrderTraversal(Node* root){
    if(root == NULL){
        return;
    } 

    Queue* q = createQueue();
    enqueue(q,root);

    printf("Level-order traversal:");
    while(!isQueueEmpty(q)){
        Node* current = dequeue(q);
        printf("%d ", current->data);

        if(current->left != NULL){
            enqueue(q, current->left);
        }

        if(current->right != NULL){
            enqueue(q, current->right);
        }  
    }
    printf("\n");
}

int main(){
    
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->right = createNode(6);

    levelOrderTraversal(root);

    return 0;
}

/*Notes:
// Creating a simple tree:
    //        1
    //       / \
    //      2   3
    //     / \   \
    //    4   5   6


Step-by-Step:

>>Visit all nodes level by level, from left to right.

>>Use a Queue: We need a queue to keep track of nodes to visit in order.

>>Start with the Root: Enqueue the root node.

>>Repeat While Queue is Not Empty:
a. Dequeue a node from the front.
b. Print its data.
c. Enqueue its left child (if it exists).
d. Enqueue its right child (if it exists).

>>Stop when Queue is Empty:

>>All nodes have been visited.


Steps::::

Enqueue 1

Dequeue → Print 1 → Enqueue 2 and 3

Dequeue → Print 2 → Enqueue 4 and 5

Dequeue → Print 3

Dequeue → Print 4

Dequeue → Print 5

Queue is empty → Done!

Output: 1 2 3 4 5
*/