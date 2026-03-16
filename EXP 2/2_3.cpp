#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 9, 4, 8, 2, 4, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxAND=0,num1=0,num2=0,i,j;
    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            int currentAND=arr[i]&arr[j];
            if (currentAND>maxAND) {
                maxAND=currentAND;
                num1=arr[i];
                num2=arr[j];
            }
        }
    }
    cout<<"Max AND pair: ("<<num1<<","<<num2<<")"<< endl;
    return 0;
}