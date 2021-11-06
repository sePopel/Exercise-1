#include <iostream>
#include <AstUtils.h>


using namespace std;

bool IsPrime(unsigned long long n) {

    if (n == 2 || n == 3) return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0) return false;

    for (unsigned long long i = 6; i*i <= n; i += 6){
        if (n % (i - 1) == 0 || n % (i + 1) == 0) return false;
    }

    return true;
}

void FactPrimes(unsigned long long numb) {

    unsigned long long prm = 2;

    while(numb % prm != 0){
        prm++;
        while(!IsPrime(prm)){
            prm++;
        }
    }

    if (numb/prm==1) {
        cout << prm;
        return;
    }

    cout << prm << "*";
    FactPrimes(numb/prm);
}

int main(){

    SayVersion();

    cout << "\nPlease choose number for prime factorization: \n";

    unsigned long long numb;
    std::cin >> numb;

    FactPrimes(numb);

    return 0;
}