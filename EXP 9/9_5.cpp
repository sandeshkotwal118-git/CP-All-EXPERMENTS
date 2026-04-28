#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    string s;
    cout << "Enter postfix expression: ";
    cin >> s;
    stack<int> st;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (isdigit(c)) {
            st.push(c - '0'); 
        } 
        else {
            int val1 = st.top(); st.pop();
            int val2 = st.top(); st.pop();
            switch (c) {
                case '+': st.push(val2 + val1); break;
                case '-': st.push(val2 - val1); break;
                case '*': st.push(val2 * val1); break;
                case '/': st.push(val2 / val1); break;
            }
        }
    }
    cout << "Result: " << st.top() << "\n";
    return 0;
}