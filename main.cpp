// Tej Hiremath
// This is the main.cpp file for the Linked Lists assignments.
// 1/13/23


#include <iostream>
#include "Node.h"
#include "student.h"

using namespace std;

void add (int newvalue);
void print(Node* next);

Node* head = NULL;

int main() {
 add(5);
 print(head);
 add(7);
 print(head);
 add(2);
 print(head);
}

void add(int newvalue) {
  Node* current = head;
  Student* student;
  if (current == NULL) {
    student = new Student();
    head = new Node(student);
  }
  else {
    while (current->getNext() != NULL) {
    current = current->getNext();
   }
    current->setNext(new Node(student)); 
  }
}
  
void print(Node* next) {
  if (next == head) {
    cout << "List:";
  }
  if (next != NULL) {
    cout << next->getStudent() << " ";
    print(next->getNext());
  }
}
