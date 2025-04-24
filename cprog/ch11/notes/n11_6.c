//qsort() ::::::::::::::::::::::::::::::::::::::::

#include <stdio.h>
#include <stdlib.h>

struct animal{
    char name;
    int leg_count;
};

//function definition
int compar(const void *elem1, const void *elem2){

 // We know we're sorting struct animals, so let's make both
 // arguments pointers to struct animals

 const struct animal *animal1 = elem1;
 const struct animal *animal2 = elem2;

 if (animal1->leg_count > animal2->leg_count)
 return 1;
 if (animal1->leg_count < animal2->leg_count)
 return-1;
 
 return 0;

}

int main(){

    //array of 4 structs un arranged
    struct animal a[4] = {
        {.name="Dog", .leg_count=4},
        {.name="Monkey", .leg_count=2},
        {.name="Antelope", .leg_count=4},
        {.name="Snake", .leg_count=0}
    };

    //calling qsort function to sort the array but with respect to what we want to sort we weill provide in comp
    //note:This call is saying: qsort array a, which has 4 elements, and each element is sizeof(struct animal)
    // bytes big, and this is the function that will compare any two elements.

    qsort(a, 4, sizeof(struct animal), compar);

    // Print them all out
    for (int i = 0; i < 4; i++) {
    printf("%d: %s\n", a[i].leg_count, a[i].name);
    }

}

/*
Note:
The qsort will sort any type of data based on the conditions and comparisons stated in the comp function.
*/