#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* top = NULL;
void push(int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = top;
    top = newNode;

    cout << "PUSHED " << val << endl;
}
void pop() {
    if (top == NULL) {
        cout << "Stack Underflow\n";
    } else {
        Node* temp = top;
        cout << "Popped: " << top->data << endl;
        top = top->next;
        delete temp;
    }
}
void display() {
    if (top == NULL) {
        cout << "Stack is empty\n";
    } else {
        Node* temp = top;
        cout << "Stack: ";
        while (temp != NULL) {
            cout << temp->data << " ";  
            temp = temp->next;
        }
        cout << endl;
    }
}
int main() {
    push(10);
    push(30);
    display();
    pop();
    push(20);
    display();
    return 0;
}