//
// Created by Ricky on 5/20/2015.
//

#ifndef B_TREE_NODE_H
#define B_TREE_NODE_H

template <class T>
class Node {
private:
    T data;
    Node *next;

public:
    Node();

    Node(T);

    Node *getNext();

    T getData();

    void setData(T);

    void setNext(Node *);
};


#endif //B_TREE_NODE_H
