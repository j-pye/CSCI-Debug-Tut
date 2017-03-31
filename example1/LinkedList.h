#ifndef LINKED_LIST_H
#define LINKED_LIST_H

template <typename T>
struct Node {
   T data;
   Node* next;
};

template <typename T>
class LinkedList {
   public:
      LinkedList();
      ~LinkedList();
      void addToFront(const T &value);
      bool remove(const T &victimData);
      void print();
   private:
      Node<T>* head_;
      int size_;
};

template class LinkedList<int>;
template class LinkedList<char>;
template class LinkedList<float>;
template class LinkedList<double>;
#endif
