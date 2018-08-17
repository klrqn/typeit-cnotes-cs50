#include <stdio.h>
#include <time.h>

#define ITERATIONS 100000

int main (void)
{
    clock_t start, now, end;
    double time_spent;

    // check clock at start of process
    start = clock;

    /* here, do your time-consuming job */
    srand(time(NULL));
    for (int i = 0; i < ITERATIONS; i++)
    {
        printf(" random_number[%d] = %d ", i+1, rand());
        now = clock;
        printf(" %ld \n", now);
    }
    printf("\n");

    // check clock at end of process
    end = clock();

    printf("start time: %ld \n", start);
    printf("end time:   %ld \n", end);
    time_spent = (double)(end - start) /  CLOCKS_PER_SEC;

    printf("");
    printf("time spent: %f\n", time_spent);
    return 0;
}