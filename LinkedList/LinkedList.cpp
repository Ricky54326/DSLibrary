//
// Created by Ricky on 5/21/2015.
//

#include <iostream>
#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include "LinkedList.h"

template <class T>
LinkedList<T>::LinkedList(){
    head = nullptr;
    count = 0;
}

template <class T>
bool LinkedList<T>::add(T data){
    Node<T> *n = new Node<T>(data);
    Node<T> *itr = head;

    //Nothing in the list currently
    if(!head){
        head = n;
    }

    else{
        //get to end of list
        while(itr->getNext()){
            itr = itr->getNext();
        }

        //add to tail
        itr->setNext(n);
    }

    count++;
    return true;
};

template <class T>
bool LinkedList<T>::remove(T data){
    Node<T> *itr = head;
    Node<T> *prev = nullptr;


    while(itr){

        //if we found our match, delete it
        if(itr->getData() == data){

            //special case, deleting head
            if(itr == head){
                head = itr->getNext();
            }

            else {
                prev->setNext(itr->getNext()); //set prev->next to curr->next
            }

            delete itr;
            count--;

            return true; //found
        }

        prev = itr;
        itr = itr->getNext();
    }

    return false; //not found, or other weird error
};

template <class T>
Node<T> *LinkedList<T>::get(T data){
    Node<T> *itr = head;


    while(itr){

        //if we found our match, return it
        if(itr->getData().equals(data)){
            count--;
            return itr; //found
        }

        itr = itr->getNext();
    }

    return false; //not found, or other weird error
};

template <class T>
void LinkedList<T>::print(){
    Node<T> *itr = head;
    while(itr){
        std::cout << itr->getData() << "->";
        itr = itr->getNext();
    }

    std::cout << "NULL" << std::endl;

};

#endif




