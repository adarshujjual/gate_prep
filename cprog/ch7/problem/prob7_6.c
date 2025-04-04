/*
Vowel Counter
Write a program that counts and prints the number of vowels in a given string. Ensure that both uppercase
and lowercase vowels are considered.
*/

#include <stdio.h>
//function definition
int vowelCnt(char str[]){ 
    int count,i=0; //initialize counter and i ;

    while(str[i] != '\0'){ //run through whole string until '\0' is incountred
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' ||
           str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){ //if elements are equal to vowels (both smallcase and uppercase) increment counter

            count++;    //increment counter
        }

        i++; //increment i until end of the string in reached
    }

    return count; //return counter i.e an integer
}

int main(void){
    int result;
    char inpStr[150];

    printf("Enter the input string:\n");//statement
    fgets(inpStr,sizeof(inpStr),stdin);//take input string using fgets

    result = vowelCnt(inpStr);  //function call

    printf("The number of vowels in the given string is:%d",result); //print output
}

