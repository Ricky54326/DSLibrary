//
// Created by Ricky on 5/22/2015.
//

#ifndef B_TREE_BINARYTREE_H
#define B_TREE_BINARYTREE_H

#include <stddef.h>
#include "BinaryTreeNode.cpp"

template <class T>
class BinarySearchTree {
private:
    int count;
    BinaryTreeNode<T> *root;
    bool addRecursive(T, BinaryTreeNode<T> *);
    BinaryTreeNode<T> *searchRecursive(T, BinaryTreeNode<T> *);
    void printRecursive(BinaryTreeNode<T> *node);
    bool isBST(BinaryTreeNode<T> *, int, int);

public:
    BinarySearchTree();

    BinaryTreeNode<T> *getRoot();

    bool add(T);


    bool remove(T);

    BinaryTreeNode<T> *search(T);

    size_t size();

    void print();

    bool isBST(int , int );
};

#endif //B_TREE_BINARYTREE_H
