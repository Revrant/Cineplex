/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 05 Cineplex
Date Last Modified: 02/23/2017
File Summary: Stores Theatre class member variables and methods
------------------------------------------*/
#ifndef THEATRE_H
#define THEATRE_H
#include "Stack.h"
#include "Queue.h"
#include <fstream>
#include <string>
#include <iostream>

class Theatre
{
private:
  Queue<std::string>* m_line;
  Stack<std::string>* m_theatre;
  std::string m_filename;
  int truefile;
  std::ifstream inFile;

public:
  /**
    * @pre - Theatre call
    * @post - Runs theatre
    * @return - void
    **/
  Theatre(std::string filename);
  /**
    * @pre - Constructor
    * @post - Deletes class
    * @return - void
    **/
  ~Theatre();
  /**
    * @pre - Function call
    * @post - Runs program
    * @return - void
    **/
  void run();
};
#endif
