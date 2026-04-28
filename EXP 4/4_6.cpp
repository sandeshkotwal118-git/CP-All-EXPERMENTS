#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    int n = arr.size(),i,j;
    cout << "Leaders: ";
    for (i = 0; i < n; i++) {        
        for (j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                break;
            }
        }        
        if (j == n) {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}