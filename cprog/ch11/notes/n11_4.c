//Array pointer equivalence in function call

/*
Note:
A function in c having input argument as a pointer can take both either a pointer or an array as they both act as the same.
e.g
int my_strlen(char *s) //argument variable is a pointer

int my_strlen(char s[]) // Works, too! but its an array
*/

// If you have a function that takes a pointer argument, e.g.:
    int my_strlen(char *s)

//we can pass either an array or a pointer to this function and have it work!
    char s[] = "Antelopes";
    char *t = "Wombats";
    printf("%d\n", my_strlen(s)); // Works!
    printf("%d\n", my_strlen(t)); // Works, too!

//And it’s also why these two function signatures are equivalent:
    int my_strlen(char *s)  // Works!
    int my_strlen(char s[]) // Works, too
    