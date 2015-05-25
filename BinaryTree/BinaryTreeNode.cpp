//
// Created by Ricky on 5/22/2015.
//

#include "BinaryTreeNode.h"

template <class T>
BinaryTreeNode<T>::BinaryTreeNode(){
    data = 0;
    left = nullptr;
    right = nullptr;
}


template <class T>
BinaryTreeNode<T>::BinaryTreeNode(T d){
    data = d;
    left = nullptr;
    right = nullptr;
};

template <class T>
BinaryTreeNode<T>* BinaryTreeNode<T>::getLeft(){
    return left;
};

template <class T>
BinaryTreeNode<T>* BinaryTreeNode<T>::getRight(){
    return right;
};

template <class T>
void BinaryTreeNode<T>::setLeft(BinaryTreeNode *node){
    left = node;
};

template <class T>
void BinaryTreeNode<T>::setRight(BinaryTreeNode *node){
    right = node;
};

template <class T>
T BinaryTreeNode<T>::getData(){
    return data;
};

template <class T>
void BinaryTreeNode<T>::setData(T d){
    data = d;
};



