#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, i, key, hs, j, index, h1, h2;
    cout << "Enter number of elements and table size: ";
    cin >> n >> hs;
    vector<int> h(hs, -1); 
    cout << "Enter the keys:\n";
    for (i = 0; i < n; i++) {
        cin >> key;
        h1 = key % hs;
        h2 = 1 + (key % (hs - 1)); 
        for (j = 0; j < hs; j++) {
            index = (h1 + (j * h2)) % hs;
            if (h[index] == -1) {
                h[index] = key;
                break;
            }
        }
    }
    cout << "Double Hashing Table\n";
    for (i = 0; i < hs; i++) {
        cout << "Index " << i << ": ";
        if (h[i] != -1) {
            cout << h[i] << "\n";
        } else {
            cout << endl;
        }
    }
    return 0;
}