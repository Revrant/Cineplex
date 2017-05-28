/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 05 Cineplex
Date Last Modified: 02/23/2017
File Summary: Validates user inputs a file
------------------------------------------*/
#include "Theatre.h"
#include <iostream>

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    std::cout << "Incorrect number of parameters!\n";
  }
  else
  {
    Theatre seat(argv[1]);
    seat.run();
  }
  return(0);
}
