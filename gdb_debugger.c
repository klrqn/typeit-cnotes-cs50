#include <stdio.h>

int main()
{
	int i, num, j;
	printf("enter a number: ");
	scanf("%d", &num);
	
	for (i = 1, j = 1; i < num; i++)
	{
		j = j*i;
		printf("%i * ", i);
	}
	printf("\n");
	
	printf("The factorial of %d is %d\n", num, j);
	
}

// https://www.thegeekstuff.com/2010/03/debug-c-program-using-gdb/

// cc -g gdb_debugger.c
// gdb a.out
// break 10
// run [args]

// PRINTING VARIABLES
// print {var}
// p {var}

// c or continue, debugger will continue executing until the next break point

// n or next, debugger will execute the next function as a single instruction

// s or step, same as next but does not treat function as a single instruction
// s or step, instead goes into the function and executes line by line

// l - list - print the source code in the debug mode <l line> or <l function>
// <ENTER> executes previous command again.
// bt - backtrack - print backtrace of all stack frames
