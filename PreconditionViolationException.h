/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 05 Cineplex
Date Last Modified: 02/23/2017
File Summary: Stores customRuntime error method
------------------------------------------*/
#ifndef PRECONDITIONVIOLATIONEXCEPTION_H
#define PRECONDITIONVIOLATIONEXCEPTION_H
#include <stdexcept>
#include <string>


class PreconditionViolationException : public std::runtime_error
{
public:
  /**
    * @pre - throw()
    * @post - Ends program/function/loop/etc...
    * @return - Error Message
    **/
  PreconditionViolationException(std::string msg);

};
#endif
