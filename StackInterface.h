/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 05 Cineplex
Date Last Modified: 02/23/2017
File Summary:
------------------------------------------*/
#ifndef STACKINTERFACE_H
#define STACKINTERFACE_H
#include "Node.h"
#include "PreconditionViolationException.h"

template <typename T>
class StackInterface
{
public:
  virtual ~StackInterface() {};
  virtual bool isEmpty() const = 0;
  virtual void push(const T value) throw(PreconditionViolationException) = 0;
  virtual void pop() throw(PreconditionViolationException) = 0;
  virtual T peek() const throw(PreconditionViolationException) = 0;
};
#endif
