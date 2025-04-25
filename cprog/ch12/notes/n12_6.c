// realloc() with NULL

int *p = NULL;
int length = 0;
while (!done) {
// Allocate 10 more ints:
length += 10;
p = realloc(p, sizeof *p * length);
// Do amazing things
// ...
}

//In this example we did not need an initial malloc() since p was NULL to start.