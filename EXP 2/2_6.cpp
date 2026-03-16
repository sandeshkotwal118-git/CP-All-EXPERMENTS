#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 5, 4, 5, 2, 4, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }

    cout << result; 
    return 0;
}
