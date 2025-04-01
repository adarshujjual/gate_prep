// String Length:
// Function strlen() is used to determine the length of the string
// A 'NUL' character can be written in C code as '\0',when a string in double quotes is added to the code, then
// a 'NUL' character is automatically, implicitly included.

#include <stdio.h>
 #include <string.h>
 int main(void)
 {
 char *s = "Hello, world!"; //initialize a string using a char pointer 's'

 //OUTPUT:The string is 13 bytes long.
 printf("The string is %zu bytes long.\n", strlen(s)); // print size_t with %zu //it returns an integer


//function that counts chars in a string until it finds a 'NUL' i.e '\0'
//The procedure is to look down the string for a single NUL character, counting as we go
char *ch = "Hello!"; // Actually "Hello!\0" behind the scenes

//function definition
int my_strlen(char *s){
int count = 0;            // Initialize a counter
while (ch[count] != '\0') // Single quotes for single char
count++;                   //Increment the counter until '\0' is encountered 
return count;              //an integer is returned 
}
//OUTPUT: The length of the string ch is : 6
printf("The length of the string ch is : %d\n",my_strlen(ch)); //call function to get the length of the string
}