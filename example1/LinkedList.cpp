#include <iostream>
#include "LinkedList.h"

using namespace std;

template <typename T>
LinkedList<T>::LinkedList() : head_(NULL), size_(0) {}

template <typename T>
LinkedList<T>::~LinkedList() {
   Node<T>* victim = head_;
   while(victim != NULL) {
      Node<T>* temp = victim;
      delete victim;
      size_--;
      victim = temp->next;
   }
}

template <typename T>
void LinkedList<T>::addToFront(const T &value) {
   cout << "Adding Node...Value: " << value << endl;
   Node<T>* newNode = new Node<T>;
   newNode->data = value;
   newNode->next = head_;
   head_ = newNode;
   size_++;
   cout << "List Size: " << size_ << endl;
}

template <typename T>
bool LinkedList<T>::remove(const T &victimData) {
   Node<T>* cur = head_;
   Node<T>* prev = NULL;
	
   while(cur != NULL) {
      if (cur->data == victimData) {
         cout << "Removing: " << cur->data << endl;
         // Node is not the head
         if (prev != NULL) { 
            prev->next = cur->next;
            delete cur;
            prev = NULL;
         // Last node in the list
         } else if (cur->next == NULL) {
            head_ = NULL;
            delete cur;
            cur = NULL;
         // Node is the head of the list
         } else {
            head_ = cur->next;
            delete cur;
            cur = NULL;    
         }
         size_--;
         return true;
      }
      cur = NULL;
      prev = cur;
      cur = cur->next;
   }
   return false;
}

template <typename T>
void LinkedList<T>::print() {
   Node<T>* cur = head_;
   while(cur != 0) {
      cout << "Node Data: " << cur->data << endl;
      cur = cur->next;
   }
   cout << "Total Nodes: " << size_ << endl << endl;
}
