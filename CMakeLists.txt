cmake_minimum_required(VERSION 3.2)
project(B_Tree)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(B_Tree ${SOURCE_FILES} LinkedList/Node.h LinkedList/Node.cpp LinkedList/LinkedList.h LinkedList/LinkedList.cpp BinaryTree/BinarySearchTree.h BinaryTree/BinarySearchTree.cpp BinaryTree/BinaryTreeNode.h BinaryTree/BinaryTreeNode.cpp)