#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    int n=arr.size(),i,count=0,temp=0;
    for (i = 0; i < n; i++) {
        if (arr[i]!= 0) {
            temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++;
        }
    }
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}