#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include "BSTI.h"
#include "Node.h"
#include <iostream>



template <typename T>
class BinarySearchTree : public BSTI<T>

{

 private: 

   Node<T>* m_root; 


   bool add(T value, Node<T>* subtree);
   void deleteTree(Node<T>* subTree); 
   bool search(T value, Node<T>* subtree);
   void printTree(Node<T>* subtree, Order order) const; 
   void treeToVector(Node<T>* subtree, Order order, std::vector<T>& vec) const;
          

 public:

   BinarySearchTree();
   BinarySearchTree(const BinarySearchTree<T>& other);
   ~BinarySearchTree();
   BSTI<T>* clone();
   bool isEmpty() const;
   bool add(T value);
   bool search(T value) const;
   std::vector<T>treeToVector(Order order) const;
   


};
#include "BinarySearchTree.hpp"
#endif

