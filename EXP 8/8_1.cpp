#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<char> v(s.begin(), s.end());
    vector<char> r = v;
    reverse(r.begin(), r.end());
    if(v == r)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}