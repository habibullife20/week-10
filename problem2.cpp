#include <iostream>
using namespace std;

int gcd(int a, int b);
int countDiv(int g, int d);
int commonFactors(int a, int b);

int main() {
    int a, b;
    cin >> a >> b;
    cout << commonFactors(a, b) << endl;
    return 0;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int countDiv(int g, int d) {
    if (d == 0) {
        return 0;
    }
    if (g % d == 0) {
        return 1 + countDiv(g, d - 1);
    }
    return countDiv(g, d - 1);
}

int commonFactors(int a, int b) {
    int g = gcd(a, b);
    return countDiv(g, g);
}
