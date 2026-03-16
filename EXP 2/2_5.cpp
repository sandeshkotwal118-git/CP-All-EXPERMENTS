#include <iostream>
#include <cmath>
using namespace std;
double stirling(int n) {
    if (n <= 0) return 1.0;
    return sqrt(2 * M_PI * n) * pow(n / M_E, n);
}

int main() {
    cout << stirling(10) << endl;
    return 0;
}