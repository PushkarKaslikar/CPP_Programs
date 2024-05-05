#include <iostream>
using namespace std; 

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void insert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data<<" ";
            temp = temp->next;
        }
    }

};

int main() {
    LinkedList list;
    list.insert(3);
    list.insert(2);
    list.insert(1);

    list.display();

    return 0;
}