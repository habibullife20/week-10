#include <iostream>
using namespace std;

bool play(int n, int take, bool aliceTurn);
bool canAliceWin(int n);

int main() {
    int n;
    cin >> n;

    if (canAliceWin(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

bool play(int n, int take, bool aliceTurn) {
    if (n < take) {
        return !aliceTurn;
    }

    int nextN = n - take;
    int nextTake = take - 1;
    bool nextTurn = !aliceTurn;

    return play(nextN, nextTake, nextTurn);
}

bool canAliceWin(int n) {
    return play(n, 10, true);
}
