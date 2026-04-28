#include <iostream>
using namespace std;

int main() {
    int a[100], i, j, target, n;
    
    cout << "Enter no. of elements: ";
    cin >> n;
    
    cout << "Enter elements (Must be sorted): ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << "Enter target: ";
    cin >> target;
    
    i = 0;
    j = n - 1;
    
    while (i < j) {
        if (a[i] + a[j] == target) {
            cout << a[i] << " " << a[j] << endl;
            i++;
            j--;
        }
        else if (a[i] + a[j] < target) {
            i++;
        }
        else {
            j--;
        }
    }
    
    return 0;
}