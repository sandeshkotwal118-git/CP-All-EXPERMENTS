#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int i,j;
    for(i = 0; i < s.length(); i++) {
        for(j = i + 1; j < s.length(); j++) {
            if(s[i] == s[j]) {
                cout << s[i];
                return 0;
            }
        }
    }
    cout << "Not Found";
    return 0;
}