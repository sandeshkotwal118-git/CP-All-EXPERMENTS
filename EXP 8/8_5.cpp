#include <iostream>
#include <stack>
using namespace std;
int main() {
    string s, word = "";
    int i;
    getline(cin, s);
    stack<string> st;
    for(i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            st.push(word);
            word = "";
        } else {
            word = word + s[i];
        }
    }
    st.push(word);
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}