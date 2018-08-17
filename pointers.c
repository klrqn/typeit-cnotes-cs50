#include <stdio.h>

int main(void)
{

    int n = 45;
    printf("int  n = 45\n");
    printf("int* p = &n\n");
    int* p = &n;


    n = 46;
    printf("change n to 46 ... n = 46\n but don't touch p\n");



    printf("*p = %d \t\t - DEFREFERENCING - this means p is pointing at the value of &n = 46 \n", *p);
    printf("p  = %p \t - this is the memory address p is pointing to &n\n", p);
    printf("n  = %i \t\t - this is just the integer n! sitting at memory address &n\n", n);
    printf("*n = %p \t - this is the memory address of n\n\n", &n);

    printf("because *p is pointing at n, the value of *p (dereferencing) is 46\n\n");

    printf("what is &p? (the address of p) what is &n? (the address of n) should they be the same?: \n");

    *p = 56;
    printf("change p to 56 ... *p = 56;\n");

    printf("*p = %i\n", *p);
    printf("n = %i\n", n);
    printf("becaues when you change one you change both!!\n\n");

    printf("actually, &p and &n are located at separate places in memory, p is just pointing to &n:\n");
    printf("&n = %p\n", &n);
    printf("&p = %p\n", &p);
    printf("it's just that *p is pointed at the location in memory where n resides.\n\n");

    printf("a pointer is nothing more than an address\n\n");

    printf("pointers are addresses to locations in memory where variables live\n\n");

    // ============================================

    int k; // box called k i can put integers into
    k = 5; // put 5 in the box

    int* pk; // pointer pk
    pk = &k; // pk gets the address of k

    printf("if x is a int-type variable, then &x is a pointer-to-int whose value is the address of x\n\n");

    printf("the main purpose of a pointer is to allow us to modify or inspect the location to which it points;\n");
    printf("we do this by DEREFERENCING the pointer\n");

    char vowel = 'a';
    printf("char vowel                                    = 'a'\n");

    char* pc = &vowel;
    printf("char* pc                                      = &vowel;\n");

    printf("dereferencing pointer-to-char... *pc          = %c\n", *pc);
    printf("whereas pointer-to-char pc is just an address = %p\n", pc);




}