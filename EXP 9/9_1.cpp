#include <iostream>
using namespace std;
int stack[5];
int top = -1;
void push(int val) {
    if (top == 4)
        cout << "Overflow\n";
    else
        stack[++top] = val;
}
void pop() {
    if (top == -1)
        cout << "Underflow\n";
    else
        stack[top--];
}
void display() {
    if (top == -1)
        cout << "Empty\n";
    else {
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
}
int main() {
    push(10);
    push(30);
    display();
    pop(); 
    display();
    return 0;
}