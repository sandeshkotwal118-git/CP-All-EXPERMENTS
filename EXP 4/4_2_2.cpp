#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> a={10, 20, 30, 40, 50};
    int n =a.size(),i,j,temp;
    vector<int>a_asc = a;
    vector<int>a_desc = a;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a_asc[j] > a_asc[j + 1]) {
                temp = a_asc[j];
                a_asc[j] = a_asc[j + 1];
                a_asc[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a_desc[j] < a_desc[j + 1]) {
                temp = a_desc[j];
                a_desc[j] = a_desc[j + 1];
                a_desc[j + 1] = temp;
            }
        }
    }
    if (a == a_asc || a == a_desc) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}