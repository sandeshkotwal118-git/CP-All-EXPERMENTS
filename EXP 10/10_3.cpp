#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque<int> dq;
    dq.push_front(10); 
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.pop_front();
    dq.pop_back();
    cout << "Final Deque: ";
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    return 0;
}