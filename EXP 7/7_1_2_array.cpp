#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[100], n;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);    
    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << "\n"; 
    } 
    
    return 0;
}