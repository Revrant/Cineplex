/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 05 Cineplex
Date Last Modified: 02/23/2017
File Summary: Declares Node.h methods
------------------------------------------*/
template <typename T>
Node<T>::Node(T value)
{
  m_value = value;
  m_next = nullptr;
}

template <typename T>
void Node<T>::setNext(Node<T>* next)
{
  m_next = next;
}

template <typename T>
T Node<T>::getValue()
{
  return(m_value);
}

template <typename T>
void Node<T>::setValue(T value)
{
  m_value = value;
}

template <typename T>
Node<T>* Node<T>::getNext()
{
  return(m_next);
}
