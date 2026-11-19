#include <iostream>
using namespace std;

int countDiv(int n, int d);
bool isThree(int n);

int main() {
    int n;
    cin >> n;

    if (isThree(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

int countDiv(int n, int d) {
    if (d == 0) {
        return 0;
    }

    int restCount = countDiv(n, d - 1);

    if (n % d == 0) {
        return 1 + restCount;
    }

    return restCount;
}

bool isThree(int n) {
    return countDiv(n, n) == 3;
}
