/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 05 Cineplex
Date Last Modified: 02/23/2017
File Summary:
------------------------------------------*/
#ifndef QUEUEINTERFACE_H
#define QUEUEINTERFACE_H
#include "Node.h"
#include "PreconditionViolationException.h"

template <typename T>
class QueueInterface
{
public:
  virtual ~QueueInterface() {};
  virtual bool isEmpty() const = 0;
  virtual void enqueue(const T value) throw(PreconditionViolationException) = 0;
  virtual void dequeue() throw(PreconditionViolationException) = 0;
  virtual T peekFront() const throw(PreconditionViolationException) = 0;
};
#endif
