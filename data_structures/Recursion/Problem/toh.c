//Write a recursive C function to solve the Tower of Hanoi problem for n disks.

#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination){
    if (n == 1){
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n",n,source,destination);
    towerOfHanoi(n - 1,auxiliary,source,destination);
}

int main(){
    int numDisks;
    printf("Enter the number of disks: ");
    scanf("%d",&numDisks);
    if (numDisks < 1){
        printf("Number of disks must be at least 1.\n");
    }else{
        printf("Steps to solve Tower of Hanoi with %d disks:\n", numDisks);
        towerOfHanoi(numDisks, 'A','B','C');
    }
    return 0;
}



/*
Notes:
Recursive Approach
To move n disks from the source rod to the destination rod using the auxiliary rod:

Base case: If n == 1, simply move the single disk from source to destination.

Recursive case:
Move n-1 disks from source to auxiliary (using destination as temporary).
Move the largest disk (the n-th disk) from source to destination.
Move n-1 disks from auxiliary to destination (using source as temporary).
This process repeats, breaking the problem into smaller subproblems until only one disk is left to move.
*/