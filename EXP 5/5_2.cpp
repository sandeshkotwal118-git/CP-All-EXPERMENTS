#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, i,j, key, index, hs;    
    cout << "Enter number of elements and table size: ";
    cin >> n >> hs;
    vector<int> h(hs, -1); 
    cout << "Enter the keys:\n";
    for (i = 0; i < n; i++) {
        cin >> key;
        for (j = 0; j < hs; j++) {
            index = (key + j) % hs;
            if (h[index] == -1) {
                h[index] = key;
                break;
            }
        }
    }
    cout << "Linear Probing Hash Table\n";
    for (i = 0; i < hs; i++) {
        cout << "Index " << i << ": ";
        if (h[i] != -1) {
            cout << h[i] << "\n";
        } else {
            cout << "Empty\n";
        }
    }
    return 0;
}