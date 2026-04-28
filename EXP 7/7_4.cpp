#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int a[100], b[100], s1,j,s2,i;
    vector<int> v;
    cout << "Enter size of arr 1 and 2: ";
    cin >> s1 >> s2;
    cout << "Enter arr 1: ";
    for (i = 0; i < s1; i++) {
        cin >> a[i];
    }
    cout << "Enter arr 2: ";
    for (i = 0; i < s2; i++) {
        cin >> b[i];
    }
    for (i = 0; i < s1; i++) {
        for (j = 0; j < s2; j++) {
            if (a[i] == b[j] && find(v.begin(), v.end(), a[i]) == v.end()) {
                v.push_back(a[i]);
                break;
            }
        }
    }
    cout << "Intersection: ";
    for (i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}