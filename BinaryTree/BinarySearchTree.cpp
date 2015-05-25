//
// Created by Ricky on 5/21/2015.
//

#include <iostream>
#ifndef _BINARY_SEARCH_TREE_H
#define _BINARY_SEARCH_TREE_H_

#include "BinarySearchTree.h"

template <class T>
BinarySearchTree<T>::BinarySearchTree(){
    root = nullptr;
    count = 0;
}

template <class T>
bool BinarySearchTree<T>::add(T data){
    BinaryTreeNode<T> *node = new BinaryTreeNode<T>(data);
    if(!root){
        root = node;
    }
        //recursive case
    else{
        addRecursive(data, root);
    }
};

template <class T>
bool BinarySearchTree<T>::addRecursive(T data, BinaryTreeNode<T> *node){
    BinaryTreeNode<T> *n = new BinaryTreeNode<T>(data);
    if(node){
        //add to left
        if(node->getData() > data){

            if(node->getLeft()) {
                addRecursive(data, node->getLeft());
            }
            else{
                node->setLeft(n);
            }
        }

            //add to right
        else if(node->getData() < data){

            if(node->getRight()) {
                addRecursive(data, node->getRight());
            }
            else{
                node->setRight(n);
            }
        }

        else{
            std::cout << "Error! We do not yet support duplicate entries" << std::endl;
        }
    }

    else{
        std::cout << "At the end, weird error" << std::endl;
        return node;
    }
}

template <class T>
bool BinarySearchTree<T>::remove(T data){

};

template <class T>
BinaryTreeNode<T> *BinarySearchTree<T>::getRoot(){
    return root;
}

template <class T>
BinaryTreeNode<T> *BinarySearchTree<T>::search(T data){
    searchRecursive(data, root);
};

template <class T>
BinaryTreeNode<T> *BinarySearchTree<T>::searchRecursive(T data, BinaryTreeNode<T> *node){
    if(node){
        if(data < node->getData()){
            return searchRecursive(data, node->getLeft());
        }

        else if(data > node->getData()){
            return searchRecursive(data, node->getRight());
        }

            //data matches current node
        else{
            return node;
        }
    }

    else{
        return node;
    }
};

template <class T>
void BinarySearchTree<T>::print(){
    printRecursive(root);
};

template <class T>
void BinarySearchTree<T>::printRecursive(BinaryTreeNode<T> *node){
    if(!node){
        return;
    }

    if(node->getLeft()) {
        printRecursive(node->getLeft());
    }

    std::cout << node->getData() << std::endl;

    if(node->getRight()){
        printRecursive(node->getRight());
    }

};

template <class T>
bool BinarySearchTree<T>::isBST( int minData, int maxData){
    return isBST(root, minData, maxData);
}

template <class T>
bool BinarySearchTree<T>::isBST(BinaryTreeNode<T> *node, int minData, int maxData){
    if(node == nullptr) return true;
    if(node->getData() < minData || node->getData() > maxData) {
        std::cout << "Failed! " << node->getData() << std::endl;
        return false;
    }
    return isBST(node->getLeft(), minData, maxData) && isBST(node->getRight(), minData, maxData);
}

#endif




