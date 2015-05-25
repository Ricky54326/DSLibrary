//
// Created by Ricky on 5/22/2015.
//

#ifndef B_TREE_BINARYTREENODE_H
#define B_TREE_BINARYTREENODE_H

template <class T>
class BinaryTreeNode {
private:
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

public:
    BinaryTreeNode();

    BinaryTreeNode(T);

    BinaryTreeNode *getLeft();
    BinaryTreeNode *getRight();

    T getData();

    void setData(T);

    void setLeft(BinaryTreeNode *);
    void setRight(BinaryTreeNode *);
};

#endif //B_TREE_BINARYTREENODE_H
