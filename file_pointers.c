And a pointer is just an address of something in memory.
And you can think of it, literally, as pointing to something.

* is just the symbol that humans, years ago, decided
would represent an address, a pointer, a location.

2 THINGS:
 GET ME THE ADDRESS OF SOMETHING: &
 GO TO THE ADDRESS OF SOMETHING:  *

 FILE POINTERS
 -  THE ability to read date from and write data to files is the primary means of storing persistent data, data
 that does not disappear when your program stops running
 - The abstraction of files that C provides is implemented in a data structure called FILE.
   -- almost universally when working with files, we will begin using pointers to them, FILE*

==========
FILE OPEN
fopen(); - FILE* ptr = fopen(<filename>, <operation>); // opens a file and puts a file pointer to it
/* IMPORTANT
CHECK THAT POINTER YOU GOT BACK IS NOT */ NULL

FILE* ptr1 = fopen("file1.txt", "r"); // read "w" "a"

==========
FILE CLOSE
fclose(); - fclose(<file pointer>);
fclose(ptr1);

==========
FILE GET CHARACTER
fgetc() - file get char
- reads and returns the next char from the file pointed to

char ch = fgetc(<file pointer>);
char ch = fgetc(ptr1);

ex.
// CAT LINUX COMMAND
char ch;
while ((ch == fgetc(ptr)) != EOF)
 printf("%c", ch);

==========
FILE PUT CHARACTER
fputc('!', ptr1);

- writes or appends the specified char to the pointed to file
- the operation of the file pointer passed in as a param must be "w" or "a" or you will suffer an error

// COPY LINUX COMMAND
char ch;
while((ch = fgetc(ptr)) != EOF)
 fputc(ch, ptr2);

==========
FILE READ
fread(<buffer>. <size>. <qty>, <file pointer>);
fread( data, size, number, inptr )

- reads <qty> units of <size> from the file pointed to and stores them in memory in a buffer (usually an array)
  pointed to by <buffer>
- Note: the operation of the file pointer must be "r"

int arr[10];
fread(arr, sizeof(int), 10, ptr);
WHAT ARE WE DOING HERE
- reading size of int * 10 bytes, 40 bytes of information (4 bytes per int)
- from file ptf
- storing them in arr
- THE NAME OF AN ARRAY IS JUST A PONTER TO ITS FIRST ELEMENT

DYNAMICALLY ALLOCATING MEMORY GOES ON THE HEAP
double* arr2 = malloc(sizeof(double) * 80);
fread(arr, sizeof(double), 80, ptr)

WE CAN ALSO TREAT fread() just like a call to fgetc
char c;
fread(&c, sizeof(char), 1, ptr);
- we have to store it in the address(&) of the char

==========
fwrite is the same as fread, but....you get it.

int arr[10];
fwrite(arr, sizeof(int), 10, ptr);
- here we are going from the buffer (arr) to the file (ptr) - inverse of FILE READ

see above examples for fwrite in other ways as well.

==========
fgets   -   reads a full string from a file
fputs   -   writes a full string to a file
printf  -   writes a formatted string to a file
fseek   -   allows you to rewind or fast-forward within a file
ftell   -   tells you at what byte position you are at withinh a file
feof    -   tells you whteher you've read to the end of a file
ferror  -   indicates whether an error has occurred in working with a file

fputc()
