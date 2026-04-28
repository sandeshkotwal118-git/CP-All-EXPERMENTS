#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int>arr={12, 35, 1, 10, 34, 11};
    int n=arr.size(),l = 0,sl=0,i,temp=0;
    for (i=0;i<n;i++) {
        temp=arr[i];
        if (temp>l) {
            sl=l;
            l=temp;
        } 
        else if (temp>sl&&temp!=l) {
            sl=temp;
        }
    }
    cout<<"The second largest number is: "<<sl<< endl;
    return 0;
}