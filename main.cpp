#include <iostream>

#include "LinkedList/LinkedList.cpp"
#include "BinaryTree/BinarySearchTree.cpp"

using namespace std;

void testLinkedList();
void testBst();

int main() {
    testLinkedList();
    cout << "\n\n";
    testBst();

    return 0;
}

void testLinkedList(){
    LinkedList<int> *list = new LinkedList<int>();
    list->add(1);
    list->add(2);
    list->add(3);
    list->add(4);
    list->add(5);

    list->print();

    list->remove(1);
    list->remove(5);

    list->print();
}
void testBst(){
    BinarySearchTree<int> *bst = new BinarySearchTree<int>();
    bst->add(8);
    bst->add(3);
    bst->add(10);
    bst->add(1);
    bst->add(6);
    bst->add(14);
    bst->add(13);
    bst->add(4);
    bst->add(7);

    bst->print();

    cout << bst->search(6) << endl;
    cout << bst->search(1337) << endl;
    cout << "Is BST? : " << bst->isBST(1, 14) << endl;
}