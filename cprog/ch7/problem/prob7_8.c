/*
Lexicographical Comparison
Write a program that compares two strings character by character (without using strcmp()) and prints whether
they are equal, or if one comes before the other alphabetically.
*/

#include <stdio.h>

int compStr(char str1[],char str2[]){
    int i = 0; //initialize counter

    while(str1[i] != '\0' && str2[i] != '\0'){ //run full length of both strings
        if(str1[i] < str2[i]){ //string1 comes first alphabetically
            return 1;
        }else if(str1[i] > str2[i]){//string2 comes first alphabetically
            return -1;
        }
        i++;
    }

    if(str1[i] != '\0' && str2[i] != '\0'){//if both the strings are equal then return '0'.
        return 0;
    }else if(str1[i] = '\0'){//as str1 is shorter it will come first
        return 1;
    }else{ //else the string2 is shorter and will come before string1
    return -1;
    }
}

int main() {

char string1[150], string2[150];
int result;

//first input string
printf("Enter first string:\n");
fgets(string1,sizeof(string1),stdin);

//second input string
printf("Enter second string:\n");
fgets(string2,sizeof(string2),stdin);

result = compStr(string1,string2); // function call
    
//print output
if(result == 0){ //both the strings have same length as well as same characters
    printf("The strings are equal.\n");
}else if(result > 0){ //string1 comes first
    printf("Alphabetically the first string comes first followed by the second string.\n");
}else{    //string2 comes first
    printf("Alphabetically the second string comes first followed by the first string.\n");
}

return 0;
}
