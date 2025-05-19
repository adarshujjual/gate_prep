//Write a recursive C function to compute the sum of digits of an integer.

#include <stdio.h>

// Recursive function to compute sum of digits
//function definition
int sumOfDigits(int n) {
    if (n == 0)             // Base case: no more digits left
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);  // Add last digit + recurse on rest
}

int main() {
    int num = 456;
    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
    return 0;
}

/*
Notes:
Here's how we can break this down recursively:

Base Case:

When n == 0, return 0.

Recursive Case:

Add the last digit (n % 10) to the sum of the digits of the remaining number (n / 10)
*/