/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 05 Cineplex
Date Last Modified: 02/23/2017
File Summary: Delcares Queue.h methods
------------------------------------------*/
#include "Queue.h"
//****************************************************
//                                                  //
//     CONSTRUCTOR                                  //
//                                                  //
//****************************************************
template <typename T>
Queue<T>::Queue()
{
  m_front = nullptr;
}

//****************************************************
//                                                  //
//     DESTRUCTOR                                   //
//                                                  //
//****************************************************
template <typename T>
Queue<T>::~Queue()
{
  Node<T>* temp = m_front;

  while(temp != nullptr)
  {
    Node<T>* next = temp->getNext();
    delete temp;
    temp = next;
  }
  m_back = nullptr;
}

//****************************************************
//                                                  //
//     IS EMPTY                                     //
//                                                  //
//****************************************************
template <typename T>
bool Queue<T>::isEmpty() const
{
  return(m_front == nullptr);
}

//****************************************************
//                                                  //
//     ENQUEUE - add to back of queue               //
//                                                  //
//****************************************************
template <typename T>
void Queue<T>::enqueue(const T value) throw(PreconditionViolationException)
{
  if(isEmpty())
  {
    Node<T>* newfront = new Node<T>(value);
    m_front = newfront;
    m_back = newfront;
  }
  else
  {
    Node<T>* newback = new Node<T>(value);
    m_back->setNext(newback);
    m_back = newback;
  }
}

//****************************************************
//                                                  //
//     DEQUEUE - remove from front of queue         //
//                                                  //
//****************************************************
template <typename T>
void Queue<T>::dequeue() throw(PreconditionViolationException)
{
  if(isEmpty())
  {
    throw(PreconditionViolationException("Nobody is in line!\n"));
  }
  else
  {
    Node<T>* oldfront = m_front;
    Node<T>* newfront = m_front->getNext();

    m_front = newfront;
    delete oldfront;
  }

}

//****************************************************
//                                                  //
//     PEEK FRONT - look at value in front of queue //
//                                                  //
//****************************************************
template <typename T>
T Queue<T>::peekFront() const throw(PreconditionViolationException)
{
  if(isEmpty())
  {
    throw(PreconditionViolationException("Nobody is in line!\n"));
  }
  else
  {
    return(m_front->getValue());
  }
}










//Free Space
