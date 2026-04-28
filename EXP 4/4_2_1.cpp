#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> arr = {10, 0, 30, 40, 50};
    if (is_sorted(arr.begin(), arr.end()) || is_sorted(arr.rbegin(), arr.rend())) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}