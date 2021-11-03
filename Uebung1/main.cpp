#include <iostream>
#include <cmath>

using namespace std;

//https://en.wikipedia.org/wiki/Primality_test

bool IsPrime(int n) {

    // Es muss nur zwischen den Faktoren 2 -> Wurzel von n getested werden
    // Auch alle geraden Faktoren > 2 fallen weg

    if (n == 2 || n == 3) return true;

    if (n <= 1 || n % 2 == 0) return false;

    for (int i = 3; i*i <= n; i += 2)
    {
        if (n % i == 0) return false;
    }

    return true;
    // TODO test if n is prime
}

void CalcPrimes(int* array, int length) {

    int a=5;
    for( int i=0; i<length;i++){

        while(!IsPrime(a)){
            a+=2;
        }
        array[i] = a;
        a+=2;
    }

// TODO determine prime numbers
}

void PrintPrimes(int* array, int length) {

    for (int i = 0; i < length; i++){
        cout << array[i]<< endl;
    }


}

int main()
{
    // Print version information of ASTU.

    int length;
    std::cin >> length;

    int* array = new int[length];
    CalcPrimes(array, length);
    PrintPrimes(array, length);

    delete[] array;

    return 0;
}