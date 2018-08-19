2 fields

- data of some data type
- a pointer to another node of the same type

============================================

typedef struct sllist
{
	VALUE val;
	struct sllist* next;
}
sllnode;

============================================

in order to work with the linked lists [LL] effectively, there are a number of operations.
1. create a LL when it doesn't exist
2. search thru a LL to find an element
3. Insert a new node into the LL
4. Delete a single element from a LL
5. Delete an entire LL

1.
sllnode* create(VALUE val);
- malloc 
-- check sure we have memory
- init node's val field
- init node's next field
- return a pointer to the newly created sllnode

sllnode* new = create(6);
if (!new)
	return 1
new.val = x;
new.sllist = NULL;

2.
search through a singly linked list
bool find(sllnode* head, VALUE val);
// head is the very first of the list
// probably want this as a global variable
	
a. create a traversal pointer pointing to the list's head
b. if the current node's val field is what we're looking for, report success
c. if not, continue to next pointers
d. if reached end, report fail.

bool exists = find(list, 6);

3. insert
sllnode* insert(sllnode* head, VALUE val);
13:30

--- allocate space for a new node
--- check and make sure we didn't run out of memory
--- populate and insert the node at the beginning of the linked list
--- return a pointer to the new head of the linked list

5.
19:00 delete an entire linked list, recursive.
have to go from the end or else you will orphan part of the list and create a memory leak.

4 delete a single element from a linked list. tricky-ish!
	doubly linked lists!
