

template<typename T>
Node<T>::Node()
{

m_left = nullptr;
m_right = nullptr; 

}

template<typename T>
Node<T>::Node(const Node<T>& other)
{


Node<T>* copyleft = other->getLeft();
Node<T>* copyright = other->getRight();  
int value = other->getVlaue;
int left; 
int right;
Node<T>* copy; //doesnt need to look at other? 
copy->setValue(value);
copy->setLeft(copyleft);
copy->setRight(copyright);


//Dont return anything cuz its a constructor? 

}


template<typename T> 
 T Node<T>::getValue() 
{
  return(m_value);
}

template<typename T>
void Node<T>::setLeft(Node<T>* left)
{

  m_left = left;

}


template<typename T>
void Node<T>::setRight(Node<T>* right) 
{
  
  m_right = right;

}


template<typename T>
void Node<T>::setValue(T value)
{

  m_value=value;

}


template<typename T>
Node<T>* Node<T>::getLeft() 
{
  
  return(m_left);

}


template<typename T>
Node<T>* Node<T>::getRight() 
{
  
  return(m_right);

}


