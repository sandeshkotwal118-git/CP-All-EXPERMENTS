#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    stack<char> st;
    int valid = 1; 
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } 
        else if (c == ')' || c == '}' || c == ']') {
            if (st.empty()) { 
                valid = 0; 
                break; 
            }
            char top = st.top();
            if ((c == ')' && top == '(') || 
                (c == '}' && top == '{') || 
                (c == ']' && top == '[')) {
                st.pop();
            } 
            else {
                valid = 0; 
                break;
            }
        }
    }
    if (valid == 1 && st.empty()) cout << "Balanced\n";
    else cout << "Not Balanced\n";
    return 0;
}