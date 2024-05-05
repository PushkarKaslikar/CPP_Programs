#include <iostream>  
  
using namespace std;  
   
class Node {  
public:  
  int data;  
  Node *next;  
  
  Node(int data) {  
    this->data = data;  
    this->next = NULL;  
  }  
};  
  
  
class LinkedList {  
private:  
  Node *head;  
  
public:  
  LinkedList() {  
    this->head = NULL;  
  }  
  
  void insertAtBeginning(int data) {  
    Node *newNode = new Node(data);  
    newNode->next = head;  
    head = newNode;  
  }  
  
  void insertAtEnd(int data) {  
    Node *newNode = new Node(data);  
    if (head == NULL) {  
      head = newNode;  
      return;  
    }  
    Node *temp = head;  
    while (temp->next != NULL) {  
      temp = temp->next;  
    }  
    temp->next = newNode;  
  }  
  
  void deleteAtBeginning() {  
    if (head == NULL) {  
      return;  
    }  
    Node *temp = head;  
    head = head->next;  
    delete temp;  
  }  
  
  void deleteAtEnd() {  
  if (head == NULL) {  
    return;  
  }  
  if (head->next == NULL) {  
    delete head;  
    head = NULL;  
    return;  
  }  
  Node *temp = head;  
  while (temp->next->next != NULL) {  
    temp = temp->next;  
  }  
  delete temp->next;  
  temp->next = NULL;  
}  
  
void printList() {  
  Node *temp = head;  
  while (temp != NULL) {  
    cout << temp->data << " ";  
    temp = temp->next;  
  }  
  cout << endl;  
}  
};  
  
int main() {  
 
LinkedList list;  
  
list.insertAtBeginning(3);  
list.insertAtBeginning(2);  
list.insertAtBeginning(1);  
  
 
list.insertAtEnd(4);  
list.insertAtEnd(5);  
list.insertAtEnd(6);  
  

cout << "Original list: ";  
list.printList();  
  
 
list.deleteAtBeginning();  
  
  
cout << "List after deleting a node at the beginning: ";  
list.printList();  
  
list.deleteAtEnd();  
  
  
cout << "List after deleting a node at the end: ";  
list.printList();  
  
return 0;  
}