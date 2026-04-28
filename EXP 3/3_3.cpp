#include <iostream>
using namespace std;

int power(int n, int m) {
    int result=1,i;    
    for (i =1;i<=m;i++) {
        result=result*n;
    }
    return result;
}

int main() {
    cout<<"Result: "<<power(2,5);
    return 0;
}