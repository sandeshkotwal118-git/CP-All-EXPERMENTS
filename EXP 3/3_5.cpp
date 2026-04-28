#include <iostream>
using namespace std;
int tcount = 0;
void cs(int arr[], int n, int sum) {
    if (sum == 0) {
        tcount++; 
        return;
    }
    if (n == 0) {
        return;
    }
    if (arr[n - 1] > sum) {
        cs(arr, n - 1, sum);
        return;
    }

    cs(arr, n - 1, sum);
 
    cs(arr, n - 1, sum - arr[n - 1]);
}

int main() {
    int arr[] = {2, 3, 5, 6, 8, 10};
    int sum = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    cs(arr, n, sum);
    cout << "Count of subsets is: " << tcount;
    return 0;
}
