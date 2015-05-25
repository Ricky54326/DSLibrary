//
// Created by Ricky on 5/21/2015.
//

#ifndef B_TREE_LINKEDLIST_H
#define B_TREE_LINKEDLIST_H

#include <stddef.h>
#include "Node.cpp"

template <class T>
class LinkedList {
private:
    int count;
    Node<T> *head;

public:
    LinkedList();

    Node<T> *getHead();

    bool add(T);

    bool remove(T);

    Node<T> *get(T);

    size_t size();

    void print();
};



#endif //B_TREE_LINKEDLIST_H
