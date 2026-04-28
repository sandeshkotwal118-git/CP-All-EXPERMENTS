#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n=matrix.size(),i,j; 
    cout << "Snake Pattern Output: ";
    for (i=0;i<n;i++) {        
        if (i%2==0) {
            for (j=0;j<n;j++) {
                cout << matrix[i][j] << " ";
            }
        } 
        else {
            for (j=n-1;j>=0;j--) {
                cout << matrix[i][j] << " ";
            }
        }
    }
    return 0;
}