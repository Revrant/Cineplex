/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 05 Cineplex
Date Last Modified: 02/23/2017
File Summary: Stores Queue methods
------------------------------------------*/
#ifndef QUEUE_H
#define QUEUE_H
#include "QueueInterface.h"

template <typename T>
class Queue : public QueueInterface<T>
{
private:
  Node<T>* m_front;
  Node<T>* m_back;

public:
  /**
    * @pre - Queue call
    * @post - Constructs Queue
    * @return - void
    **/
  Queue();
  /**
    * @pre - Queue Constructor
    * @post - Destorys Queue
    * @return - void
    **/
  ~Queue();
  /**
    * @pre - Call
    * @post - Checks if Queue is empty
    * @return - bool
    **/
  bool isEmpty() const;
  /**
    * @pre - Queue
    * @post - Creates a Node
    * @return - void
    **/
  void enqueue(const T value) throw(PreconditionViolationException);
  /**
    * @pre - Node in Queue
    * @post - Destroys Node
    * @return - void
    **/
  void dequeue() throw(PreconditionViolationException);
  /**
    * @pre - Node/m_front
    * @post - Gets value in m_front
    * @return - T 
    **/
  T peekFront() const throw(PreconditionViolationException);
};

#include "Queue.hpp"
#endif
