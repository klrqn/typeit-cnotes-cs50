queues 

FIFO

special type of structure that can be used to maintain data in an organized way

this data structure is ocmmonlyl implemented in one of two ways: as an array or as a linked-list

in either case, the important rul is that when data is added to the queue, it is tacked onto the end, 
so if an element needs to be removed, the element at the front is the only element tha tcan be legally 
removed

Enqueue: add a new element to the end of the queue
Dequeue: remove the oldest element fromt he front of the queue

#define capacity 10

//array based
typedef struct _queue
{
	int array[capacity]
	int front;
	int size;
}
queue;

queue q;

q.front = 0;
q.size = 0;

void enqueue(queue* q, int data);

enqueue(&q, 28); 
q.size++;
enqueue(&q, 33);
q.size++;
enqueue(&q, 22);
q.size++;

int dequeue(queue* q);

int x = dequeue(&q); // x == 28;



===linked list based implementation===

typdef struct _queue
{
	int val;
	struct _queue *prev;
	struct _queue *next;
}
queue;

