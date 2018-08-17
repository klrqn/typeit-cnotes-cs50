#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    // allocate 50 characters
    char* word = malloc(50 * sizeof(char));
    printf("INPUT: ");
    scanf("%s45", word);
    printf("word! %s\n", word);
    free(word);
}