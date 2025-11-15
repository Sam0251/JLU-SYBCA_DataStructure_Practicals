//#include <iostream>
using namespace std;

#define MAX 5

class Queue {
private:
    int arr[MAX];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == MAX - 1;
    }

    void enqueue(int value) {
        if (isFull()) {
        cout << "Queue Overflow! Cannot enqueue " << value << endl;
        } else {
            if (front == -1) {
                front = 0;
            }
            rear++;
            arr[rear] = value;
            cout << value << " enqueued to queue." << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Cannot dequeue." << endl;
        } else {
            cout << arr[front] << " dequeued from queue." << endl;
            front++;
            if (front > rear) {
                front = rear = -1;
            }
        }
    }

    void displayFrontRear() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Front element: " << arr[front] << endl;
            cout << "Rear element: " << arr[rear] << endl;
        }
    }

    void displayQueue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.displayQueue();
    q.displayFrontRear();

    q.dequeue();

    q.displayQueue();
    q.displayFrontRear();

    return 0;
}
Write a program to display front and rear elements of a queue.
