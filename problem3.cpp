#include <iostream>
using namespace std;

int sumBase(int n, int k);

int main() {
    int n, k;
    cin >> n >> k;
    cout << sumBase(n, k) << endl;
    return 0;
}

int sumBase(int n, int k) {
    if (n == 0) {
        return 0;
    }

    int lastDigit = n % k;
    int restSum = sumBase(n / k, k);

    return lastDigit + restSum;
}
