#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
    printf("we can use pointers to get access to a block of dynamically-allocated memory at runtime\n");
    printf("dynamically allocated memory comes from a pool of memory known as the heap.\n");

    char* a = malloc(4);

    // make a call to the C Standard Library function malloc(), passing as its parameter the number of bytes requested
    // after obtaining memory for you, malloc returns a pointer to that memory
    // if malloc can't give you memory, it returns NULL

    printf("malloc'd memory location: %p\n\n", a);

    *a = 'a';

    printf("dereferencing the pointer char* a = 'a': %c\n", *a);

    char* nullPointer = NULL;
    printf("deferencing a NULL pointer = segmentation fault\n");
    // printf("nullPointer = %c\n", *nullPointer); // has to be commented out or you get a seg fault!~

    printf("so always check if your pointer is NULL\n");
    if (nullPointer == NULL) {
        printf("if statement told me a your pointer is null! return 0!\n");
    }

    // statically obtain an integer
    int x = 1;

    // dynamically obtain an integer (but don't use magic numbers!)
    // an integer is 4 bytes - both of these do the same thing
    int *px = malloc(4);
    int *py = malloc(sizeof(int));

    px = &x;
    py = NULL;

    // printf("%i %i %i\n", x, *px, *py); returns NULL (py)

    py = px;
    // get an int from the user
    x = get_int("enter an int for variable x that will be the number of entries in an array: ");

    printf("%2.2i %2.2i %2.2i\n", x, *px, *py);

    // array of floats on the stack
    float stack_array[x];
    // array of floats on the heap
    float* heap_array = malloc(x * sizeof(float));

    stack_array[x-1] = 3.0;
    heap_array[x-1] = 4.0;

    printf("%2i %2.2f %2.2f\n\n", x, stack_array[x-1], heap_array[x-1]);

    printf("here's the trouble: dynamically-allocated memory is not automatically returned to the system for later use \n");
    printf("\t when the function in which it's created finishes execution. \n");

    printf("failing to return memory back to the sys when you're finished results in a memory leak, which can compromise \n");
    printf("\t your systems performance. \nyou just free() dynamically-allocated memory when you're done with it\n\n");

    // allocate 50 characters
    char* word = malloc(50 * sizeof(char));
    printf("INPUT: ");
    scanf("%s45", word);
    printf("word! %s\n", word);
    free(word);

    int m;
    int* c = NULL;
    int* b = malloc(sizeof(int));
    c = &m;
    c = b;
    m = 10;
    *b = m + 2;
    printf("b = %i\n", *b);
    free(b);
    // *a = 11; // segmentation fault - accessing memory you aren't supposed to
}