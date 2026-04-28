#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,i,key,index,hs;
    cout << "Enter number of elements and table size: ";
    cin >> n >> hs;
    vector<vector<int>> h(hs);
    cout << "Enter the keys:\n";
    for (i = 0; i < n; i++) {
        cin >> key;
        index = key % hs; 
        h[index].push_back(key);
    }
    cout << "Open Hash Table\n";
    for (i = 0; i < hs; i++) {
        cout << "Index " << i << ": ";
        for (int j = 0; j < h[i].size(); j++) {
            cout << h[i][j] << " ";
        }
        cout <<endl;
    }
    return 0;
}