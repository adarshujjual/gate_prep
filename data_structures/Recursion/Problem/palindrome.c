//Write a recursive C function to check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int start, int end){
    if(start >= end){
        return 1;
    }
    if(str[start] != str[end]){
        return 0;
    }
    return isPalindrome(str,start + 1,end - 1);
}

int main() {
    char str[100];
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n'){   //Checks if the string is non-empty and ends with a newline (\n) from fgets.
        str[len - 1] = '\0';                //Replaces the newline (\n) with a null terminator (\0) to clean the string.
        len--;                              //Decrements len to reflect the new length without the newline.
    }
    
    if(isPalindrome(str, 0, len - 1)){
        printf("The string '%s' is a palindrome.\n",str); //1
    }else{
        printf("The string '%s' is not a palindrome.\n",str);//0
    }
    
    return 0;
}

/*
Note:
Recursive Approach
To determine if a string is a palindrome:

Base cases:
If the string is empty (length = 0) or has one character (length = 1), it’s a palindrome.
Recursive case:
Check if the first and last characters are the same.
If they are, recursively check the substring excluding the first and last characters.
If they aren’t, the string is not a palindrome.
We’ll pass the string and two indices (start and end) to track the portion of the string to check, making recursion easier.
*/