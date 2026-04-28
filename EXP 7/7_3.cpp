#include <iostream>
#include <algorithm>
using namespace std;
void insertion(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && a[j] < a[j-1]) {
            swap(a[j], a[j-1]);
            j--;
        }
    }
}
int main() {
    int a[] = {5, 2, 1, 3};
    int n = 4,i;    
    insertion(a, n);
    cout << "Output:\n";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";   
    return 0;
}