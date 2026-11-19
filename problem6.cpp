#include <iostream>
using namespace std;

const long long MOD = 1000000007;

bool isPrime(int x);
int countPrimes(int n);
long long factorial(int n);
int numPrimeArrangements(int n);

int main() {
    int n;
    cin >> n;

    cout << numPrimeArrangements(n) << endl;

    return 0;
}

bool isPrime(int x) {
    if (x < 2) {
        return false;
    }

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int countPrimes(int n) {
    if (n == 0) {
        return 0;
    }

    return isPrime(n) + countPrimes(n - 1);
}

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }

    return (n * factorial(n - 1)) % MOD;
}

int numPrimeArrangements(int n) {
    int p = countPrimes(n);

    long long primeFact = factorial(p);
    long long nonPrimeFact = factorial(n - p);

    return (primeFact * nonPrimeFact) % MOD;
}
