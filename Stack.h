/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 05 Cineplex
Date Last Modified: 02/23/2017
File Summary: Holds stack methods for a Stack with Nodes
------------------------------------------*/
#ifndef STACK_H
#define STACK_H
#include "StackInterface.h"
#include "Node.h"
#include "PreconditionViolationException.h"

template <typename T>
class Stack : public StackInterface<T>
{
private:
  Node<T>* m_top;
  int m_size;

public:
  /**
    * @pre - Stack Call
    * @post - Constructs Stack
    * @return - void
    **/
  Stack();
  /**
    * @pre - Stack Constructor
    * @post - Destroys Stack
    * @return - void
    **/
  ~Stack();
  /**
    * @pre - Node in Stack
    * @post - Destroys Node in top of stack
    * @return - void
    **/
  void pop() throw(PreconditionViolationException);
  /**
    * @pre - Stack
    * @post - Adds Node to stack
    * @return - void
    **/
  void push(const T value) throw(PreconditionViolationException);
  /**
    * @pre - Node in Stack
    * @post - Looks at Node in top of stack
    * @return - T
    **/
  T peek() const throw(PreconditionViolationException);
  /**
    * @pre - Stack
    * @post - Checks if stack is empty
    * @return - Bool
    **/
  bool isEmpty() const;
};
#include "Stack.hpp"
#endif
