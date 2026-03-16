#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, temp;
    cout << "Enter number: ";
    cin >> n;

    temp = n; 

    while (n > 0) {
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }

    if (temp == rev)
        cout << "Given no. is Palindrome";
    else
        cout << "Not Palnindrome";

    return 0;
}