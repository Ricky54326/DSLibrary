//
// Created by Ricky on 5/20/2015.
//

#include "Node.h"

template <class T>
Node<T>::Node(){
        data = nullptr;
        next = nullptr;
}


template <class T>
Node<T>::Node(T d){
        data = d;
        next = nullptr;
};

template <class T>
Node<T>* Node<T>::getNext(){
        return next;
};

template <class T>
T Node<T>::getData(){
    return data;
};

template <class T>
void Node<T>::setData(T d){
        data = d;
};

template <class T>
void Node<T>::setNext(Node *n){
        next = n;
};


