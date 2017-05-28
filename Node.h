/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 05 Cineplex
Date Last Modified: 02/23/2017
File Summary: Stores Node methods
------------------------------------------*/
#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
private:
  T m_value;
  Node<T>* m_next;
public:
  /**
    * @pre - Node call
    * @post - Constructs a Node
    * @return - T value
    **/
  Node(T value);
  /**
    * @pre - Node
    * @post - Gets value of Node
    * @return - T
    **/
  T getValue();
  /**
    * @pre - Node
    * @post - Sets next node
    * @return - void
    **/
  void setNext(Node* next);
  /**
    * @pre - Node
    * @post - Sets value of Node
    * @return - void
    **/
  void setValue(T value);
  /**
    * @pre - Node
    * @post - Gets next Node
    * @return - Node<T>*
    **/
  Node<T>* getNext();
};
#include "Node.cpp"
#endif
