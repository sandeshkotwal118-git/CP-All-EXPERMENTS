#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v;
    int n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());    
    cout << "Sorted vector:\n";
    for (int i = 0; i < n; i++) {
        cout << v[i] << "\n";
    }
    return 0;
}