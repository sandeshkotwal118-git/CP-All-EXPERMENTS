#include <iostream>
using namespace std;

int main() {
    int a[100], i, n;
    
    cout << "Enter size: ";
    cin >> n;
    
    cout << "Enter elements: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (i = 1; i < n - 1; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            cout << a[i] << " is a peak element\n";
        }
    }
    
    return 0;
}