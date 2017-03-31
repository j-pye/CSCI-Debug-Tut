#include <iostream>
#include "LinkedList.h"

using namespace std;

int main (int argc, char **argv) {
   LinkedList<int> *list = new LinkedList<int> ();

   list->addToFront(1);
   list->addToFront(2);
   list->addToFront(3);
   list->addToFront(4);
	
   cout << endl << "List Contents:" << endl;
   list->print();

   list->remove(4);
   list->print();

   list->remove(2);
   list->print();

   list->remove(1);
   list->print();

   list->remove(3);
   list->print();

   delete list;

   return 0;
}
