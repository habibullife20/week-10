#include <iostream>
using namespace std;

int largestDigit(int n);

int main() {
    int n;
    cin >> n;
    cout << largestDigit(n) << endl;
    return 0;
}

int largestDigit(int n) {
    if (n < 10) {
        return n;
    }

    int last = n % 10;
    int rest = largestDigit(n / 10);

    if (last > rest) {
        return last;
    }
    return rest;
}
