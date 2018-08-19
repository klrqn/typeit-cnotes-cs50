#include <stdio.h>

#define VALUE int
#define CAPACITY 10
// LIFO STRUCT - push an pop


// array based
struct _stack
{
	VALUE array[CAPACITY]; // can't dynamically resize
	int top; // what element is the most recently added
}
stack;

void push(stack *s, VALUE data);

VALUE pop(stack *s);


int main ()
{
	stack s;
	s.top = 0;
	push(&s, 28);
	s.top++;
	push(&s, 33);
	s.top++;
	int x = pop(&s); // x = 33;
	int x = pop(&s); // x = 28; array is gone
}

==============

// linked list, node based
struct _stack
{
	VALUE val; // can't dynamically resize
	struct _stack *next; // what element is the most recently added
}
stack;

// always make sure to maintain a pointer to the head of THEte linked lisT (GLOBAL VAR)

// malloc new node space
	// check for null
// [new] put int into data field
// [new] ptr point to head
// update head to [new] ptr

pop()
[new ptr] pointint to head
travel to the next pointer
free first node on list
move head to [new ptr]

