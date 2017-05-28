/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 05 Cineplex
Date Last Modified: 02/23/2017
File Summary: Declares runtime error method 
------------------------------------------*/
#include "PreconditionViolationException.h"

PreconditionViolationException::PreconditionViolationException(std::string msg):std::runtime_error("PreconditionViolationException: " + msg)
{

}
