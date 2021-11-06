#include <iostream>
#include <cmath>
#include <AstUtils.h>

using namespace std;

#define NUM_PRIMES 10000

bool IsPrime(int n) {

    if (n == 2) return true;

    if (n <= 1 || n % 2 == 0) return false;

    for (int i = 3; i*i <= n; i += 2){
        if (n % i== 0) return false;
    }

    return true;
}

void CalcPrimes(int* array) {

    int a=2;

    for( int i=0; i<NUM_PRIMES;i++){

        while(!IsPrime(a)){
            a+=2;
        }
        array[i] = a;

        if(a==2) a+=1;
        else a+=2;
    }
}

void PrintPrimes(int* array) {

    for(int i = 0; i < NUM_PRIMES -1; i++){

        if(i%10 == 0){
            cout<<endl;
        }

        cout << array[i] << ", ";
    }
    cout << array[NUM_PRIMES -1];
}

int main(){

    SayVersion();

    int* array = new int[NUM_PRIMES];

    cout << "\nCalculating first " << NUM_PRIMES << " prime numbers: \n";

    StartTimer();
    CalcPrimes(array);
    StopTimer();

    cout << "It took " << GetMilliseconds() << " Milliseconds...\n\n";

    StartTimer();
    PrintPrimes(array);
    StopTimer();

    cout << "\n\nIt took " << GetMilliseconds() << " Milliseconds to print the number...";

    delete[] array;

    return 0;
}