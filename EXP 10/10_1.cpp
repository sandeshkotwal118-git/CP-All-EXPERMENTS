#include <iostream>
using namespace std;
int queue[5];
int front = -1, rear = -1;
void insert(int val) {
    if (rear == 4) {
        cout << "Queue Overflow\n";
    } else {
        if (front == -1) front = 0;
        queue[++rear] = val;
        cout << "Inserted " << val << "\n";
    }
}
void del() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow\n";
        front = rear = -1;
    } else {
        cout << "Deleted " << queue[front] << "\n";
        if (front == rear)
            front = rear = -1;
        else
            front++;
    }
}
void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty\n";
    } else {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
    }
}
int main() {
    int choice, val;
    while (true) {
        cout << "\n1. INSERT\n2. DELETE\n3. DISPLAY\n4. EXIT\n";
        cout << "Select your choice: ";
        cin >> choice;       
        switch (choice) {
            case 1:
                cout << "Enter value to INSERT: ";
                cin >> val;
                insert(val);
                break;
            case 2:
                del();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }
}