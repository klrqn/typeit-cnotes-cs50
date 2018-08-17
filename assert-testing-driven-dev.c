#include <cs50.h>
#include <stdio.h>
#include <time.h>
#include <assert.h>

bool isPrime(int);
int sumPrimes(int);
bool testPrimes(void);

// main should never contain logic! just calls to other functions etc.
int main(void)
{
    int i = get_int("Enter an Integer: ");
    printf("Sum All Primes Up to %i = %i\n", i, sumPrimes(i));
    // testPrimes();
}

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int sumPrimes(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    return sum;
}

bool testPrimes(void)
{
    // Test Driven Development --- create the tests FIRST, then write the code that qualifies those tests.
    assert(isPrime(2) == true && "2 should be prime");
    assert(isPrime(1) == false && "1 should not be prime");
    assert(isPrime(9) == false && "9 should not be prime");
    assert(isPrime(11) == false && "11 should be prime");

    return 0;
}