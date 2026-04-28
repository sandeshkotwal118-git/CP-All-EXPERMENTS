#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size(),i;
    int temp = arr[0];
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}