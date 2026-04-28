#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> fib;

    fib.push_back(0);
    fib.push_back(1);

    for (int i = 2; i <= n; i++) {
        fib.push_back(fib[i-1] + fib[i-2]);
    }

    cout << "Fibonacci series: ";
    for (int i = 0; i <= n; i++) {
        cout << fib[i] << " ";
    }

    return 0;
}
