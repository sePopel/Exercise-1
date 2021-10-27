#include <iostream>
#include <AstUtils.h>

using namespace std;

#define NUM_PRIMES 10000
//https://en.wikipedia.org/wiki/Primality_test

bool IsPrime(int n) {

    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
    // TODO test if n is prime
}

void CalcPrimes(?) {
// TODO determine prime numbers
}

void PrintPrimes(?) {
// TODO print prime numbers.
}

int main()
{
    // Print version information of ASTU.
    SayVersion();

    return 0;
}