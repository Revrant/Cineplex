/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 05 Cineplex
Date Last Modified: 02/23/2017
File Summary: Declares Stack.h methods
------------------------------------------*/
#include "Stack.h"
//****************************************************
//                                                  //
//     CONSTRUCTOR                                  //
//                                                  //
//****************************************************
template <typename T>
Stack<T>::Stack()
{
  m_top = nullptr;
  m_size = 0;
}

//****************************************************
//                                                  //
//     DESTRUCTOR                                   //
//                                                  //
//****************************************************
template <typename T>
Stack<T>::~Stack()
{
  Node<T>* temp = m_top;

  while(temp != nullptr)
  {
    Node<T>* next = temp->getNext();
    delete temp;
    temp = next;
  }
}

//****************************************************
//                                                  //
//     IS EMPTY                                     //
//                                                  //
//****************************************************
template <typename T>
bool Stack<T>::isEmpty() const
{
  return(m_top == nullptr);
}

//****************************************************
//                                                  //
//     POP - remove from top of stack               //
//                                                  //
//****************************************************
template <typename T>
void Stack<T>::pop() throw(PreconditionViolationException)
{
  if(isEmpty())
  {
    throw(PreconditionViolationException("Nobody is in line!"));
  }
  else
  {
    Node<T>* oldtop = m_top;
    Node<T>* newtop = m_top->getNext();
    m_top = newtop;
    delete oldtop;
    m_size--;
  }

}

//****************************************************
//                                                  //
//     PUSH - Insert to top of stack                //
//                                                  //
//****************************************************
template <typename T>
void Stack<T>::push(const T value) throw(PreconditionViolationException)
{
  if(m_size == 10)
  {
    throw(PreconditionViolationException("The Theatre is full!"));
  }

  Node<T>* oldtop = m_top;
  Node<T>* newtop = new Node<T>(value);

  newtop->setNext(oldtop);
  m_top = newtop;
  m_size++;
}

//****************************************************
//                                                  //
//     PEEK - Looks at top of stack                 //
//                                                  //
//****************************************************
template <typename T>
T Stack<T>::peek() const throw(PreconditionViolationException)
{
  if(isEmpty())
  {
    throw(PreconditionViolationException("Theatre is empty!"));
  }
  else
  {
    return(m_top->getValue());
  }
}












//Free Space
