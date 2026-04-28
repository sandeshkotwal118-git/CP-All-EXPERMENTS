#include <iostream>
using namespace std;

int main() {
    int N, n;
    cout << "Enter number N: ";
    cin >> N;
    cout << "Enter bit position n (0-indexed): ";
    cin >> n;

    if ((N & (1 << n)) != 0) {
        cout << "Bit at position " << n << " is SET (1)" << endl;
    } else {
        cout << "Bit at position " << n << " is UNSET (0)" << endl;
    }
    return 0;
}
