/*
Implicit Conversion Pitfalls in Conditions
Develop a program that uses implicit type conversion in a conditional statement (for example, comparing an
unsigned and a signed integer). Print the values and discuss how implicit conversion can sometimes lead to
unexpected results.
*/


#include <stdio.h>

int main() {
    int signed_val = -1;
    unsigned int unsigned_val = 9;
    //values 
    printf("Signed Value:%d\n",signed_val);
    printf("Unsigned Value:%u\n",unsigned_val);
    //implicit type conversion in conditional statement 
    if(signed_val < unsigned_val){
        printf("Result: signed_val < unsigned_val\n");
    }else{
        printf("Result: signed_val >= unsigned_val\n");
    }

    //explicitly printing the converted value
    unsigned int converted_signed = (unsigned int)signed_val;
    printf("Converted signed_val as unsigned:%u\n",converted_signed);

    return 0;
}
