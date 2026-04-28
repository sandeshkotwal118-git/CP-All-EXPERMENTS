#include <iostream>
using namespace std;

int main() {
    int a[100], i, n, key, index = -1;
    
    cout << "Enter size: ";
    cin >> n;
    
    cout << "Enter sorted elements: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << "Enter key: ";
    cin >> key;
    for (i = n - 1; i >= 0; i--) {
        if (a[i] == key) {
            index = i;
            break; 
        }
    }
    
    if (index != -1) {
        cout << "Last occ. of element is at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }
    
    return 0;
}