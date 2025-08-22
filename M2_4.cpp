//Write a program to implement a queue using arrays.
#include <iostream>
using namespace std;

#define SIZE 5 
class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }
    bool isEmpty() {
        return front == -1 || front > rear;
    }
    bool isFull() {
        return rear == SIZE - 1;
    }
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is FULL! Cannot enqueue " << value << endl;
        } else {
            if (front == -1) front = 0;
            arr[++rear] = value;
            cout << value << " enqueued to queue." << endl;
        }
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is EMPTY! Cannot dequeue." << endl;
        } else {
            cout << arr[front++] << " dequeued from queue." << endl;
        }
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is EMPTY!" << endl;
        } else {
            cout << "Queue elements (front to rear): ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n--- Queue Menu ---" << endl;
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}



