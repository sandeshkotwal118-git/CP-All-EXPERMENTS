#include <iostream>
using namespace std;
int main() {
    int r, c, i, j;
    cout << "Enter rows & columns: ";
    cin >> r >> c;
    int a[10][10];
    cout << "Enter matrix elements:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Normal matrix:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Transpose of matrix:\n";
    for (j = 0; j < c; j++) {
        for (i = 0; i < r; i++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
