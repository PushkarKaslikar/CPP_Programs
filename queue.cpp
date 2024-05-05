#include<iostream>
using namespace std;

#define MAX 100

class Queue {
private:
    int front;
    int rear;
    int arr[MAX];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int element) {
        if (rear == MAX - 1) {
            cout << "Queue is full. We can not perform enqueue operation\n";
        } else {
            if (front == -1)
                front = 0;
            arr[++rear] = element;
        }
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue is empty. We can not remove front element";
        } else {
            cout << "Element dequeued: " << arr[front] << "\n";
            front++;
        }
    }

    void display() {
        if (front == -1)
            cout << "Queue is empty\n";
        else {
            cout << "Elements in queue are\n";
            for (int i = front; i <= rear; ++i) {
                cout << arr[i] << "\n";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    q.display();

    q.dequeue();
    q.display();

    return 0;
}

