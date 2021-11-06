#include <iostream>
#include <cmath>
#include <AstUtils.h>

using namespace std;

bool IsPrime(int n) {

    if (n == 2 || n == 3) return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 6; i*i <= n; i += 6){
        if (n % (i - 1) == 0 || n % (i + 1) == 0) return false;
    }

    return true;
}

void CalcPrimes(int* array, int length) {

    int a=2;

    for( int i=0; i<length;i++){

        while(!IsPrime(a)){
            a+=2;
        }
        array[i] = a;

        if(a==2) a+=1;
        else a+=2;
    }
}

void PrintPrime(int* array, int length) {
    cout << array[length -1];
}

int main(){

    SayVersion();

    cout << "\nHow many prime numbers do you want to calculate?\n";

    int length;
    std::cin >> length;

    int* array = new int[length];

    cout << "Calculating first " << length << " prime numbers: \n";

    StartTimer();
    CalcPrimes(array, length);
    StopTimer();

    cout << "It took " << GetMilliseconds() << " Milliseconds...\n\n";

    StartTimer();
    PrintPrime(array, length);
    StopTimer();

    cout << "\n\nIt took " << GetMilliseconds() << " Milliseconds to print the number...";

    delete[] array;

    return 0;
}