


// CONSTRUCTOR
template<typename T>
BinarySearchTree<T>::BinarySearchTree()
{
m_root = nullptr;
}


//COPY CONSTRUCTOR 
template<typename T>
BinarySearchTree<T>::BinarySearchTree(const BinarySearchTree<T>& other)
{




}


//DESTRUCTOR
template<typename T>
BinarySearchTree<T>::~BinarySearchTree()
{




}

//CLONE
template<typename T>
BSTI<T>* BinarySearchTree<T>::clone()
{




}

//IS EMPTY
template<typename T>
bool BinarySearchTree<T>::isEmpty() const
{

if(m_root==nullptr)
{
return(true);
}
else
return(false);

}

//ADD
template<typename T>
bool BinarySearchTree<T>::add(T value)
{

//if tree is empty, make the root first
if(m_root==nullptr)
{
m_root = new Node<T>();
m_root->setVlaue(value);
return(true);
}

//If not, determine which major subtree it belongs in
else if(value>m_root->getValue())
{
//goes in right subtree

return(add(value, m_root->getRight() ));
}
else if(value<m_root->getValue())
{
//left subtree
return(add(value, m_root->getLeft() ));
}


//handle the case where they pass a duplicate value. Use search to do this. 
}




//SEARCH
template<typename T>
bool BinarySearchTree<T>::search(T value) const
{
  return(search(value, m_root));
}


//TREE TO VECTOR
template<typename T>
std::vector<T> BinarySearchTree<T>::treeToVector(Order order) const
{



}

//PRIVATE ADD
bool BinarySearchTree<T>::add(T value, Node<T>* subtree)
{

if(subtree==nullptr)
{

subtree = new Node<T>*;
subtree->setValue(value);
return(true);

}

else if(value==subtree->getValue()
{

  return (false);
}

else if (value>subtree->getValue())
{
   return(add(value, subtree->getRight());
}

else
{
return(add(value, subtree->getLeft());
}



}


//PRIVATE DELETE TREE
void BinarySearchTree<T>::deleteTree(Node<T>* subtree)
{



}

//PRIVATE SEARCH
void BinarySearchTree<T>::search(T value,Node<T>* subtree)
{

if(subtree==nullptr)
{
  return false;
}
else if(value == subtree->getValue())
{
  return true;
}
else if(value>subtree->getValue())
{
  return(search(value,subtree->getRight();
else 
  return(search(value,subtree->getLeft();

}

//PRIVATE PRINT TREE
void BinarySearchTree<T>::printTree(Node<T>* subtree, Order order) const
{



}


//PRIVATE TREE TO VECOTR
void BinarySearchTree<T>::treetoVector(Node<T>* subtree, Order order, std::vector<T>& vec)const
{



}



