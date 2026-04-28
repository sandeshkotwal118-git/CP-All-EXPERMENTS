#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
    int a[100], n,i,j;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
    cout << "Sorted array:\n";
    for (i = 0; i < n; i++) {
        cout << a[i] << "\n";
    }
    return 0;
}