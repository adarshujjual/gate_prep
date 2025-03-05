/*Write a C program that takes a positive integer n from the user and uses a for loop to print a pattern 
where each line contains numbers from the current value down to 1. The pattern should have n lines.*/

#include <stdio.h>
int main(){
    int n;
   
    printf("Enter a positive integer:");
    scanf("%d",&n);


    // Outer loop will control the number of lines in the pattern
    // will Start from n and count down to 1
    for (int i = n; i >= 1; i--) {
        // Inner loop will print the numbers from current "i" value down to 1
        // For each line: "j" starts at "i" and decreases to 1
        for (int j = i; j >= 1; j--) {
            // Print the current value of j followed by a space
            printf("%d ", j);
        }
        // After each inner loop is completed .....print a newline...to move to the next line
        printf("\n");
    }
    
  
    return 0;
}
