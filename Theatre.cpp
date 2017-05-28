/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 05 Cineplex
Date Last Modified: 02/23/2017
File Summary: Constructs the Theatre then runs program
------------------------------------------*/
#include "Theatre.h"
//****************************************************
//                                                  //
//     CONSTRUCTOR                                  //
//                                                  //
//****************************************************
Theatre::Theatre(std::string filename)
{
  std::ifstream inFile;
  inFile.open(filename);
  if(inFile.is_open())
  {
    truefile = 1;
  }
  else
  {
    truefile = 0;
  }

  inFile.close();
  m_filename = filename;
}

//****************************************************
//                                                  //
//     DESTRUCTOR                                   //
//                                                  //
//****************************************************
Theatre::~Theatre()
{
  delete m_theatre;
  delete m_line;
}

//****************************************************
//                                                  //
//     RUN                                          //
//                                                  //
//****************************************************
void Theatre::run()
{
  if(truefile == 1)
  {
  inFile.open(m_filename);
  if(inFile.is_open())
  {
    //Creats Line Queue and Theatre Stack
    m_line = new Queue<std::string>;
    m_theatre = new Stack<std::string>;

//-------------------------------------------------------------------
//     READ INS FILE
//-------------------------------------------------------------------
      while(!inFile.eof())
      {
        std::string command = "";
        std::string name = "";
        std::string eject = "";

        //Reads in command
        inFile >> command;
        //Ticket
        if(command == "TICKET")
        {
          inFile >> name;
          m_line->enqueue(name);
        }

        //Seating - Can only have 10 people
        else if(command == "SEATING")
        {
          for(int i = 1; i <= 10; i++)
          {
            if(m_line->isEmpty())
            {
              std::cout << "There is nobody left in line.\n";
              i = 10;
            }
            else
            {
            try
              {
                m_theatre->push(m_line->peekFront());
                std::cout << m_line->peekFront() << " left the ticket line.\n";
                m_line->dequeue();
              }
              catch(PreconditionViolationException e)
              {
                std::cout << "The Theatre is full!\n";
                i = 10;
              }
            }
          }
        }

        //Status - Print if Theatre is empty, Who is next in ticket line, and who will leave theatre first
        else if(command == "STATUS")
        {
          std::cout << "\nWelcome to the JayHawk CinePlex:\n";

          //Check if theatre is empty
          if(m_theatre->isEmpty())
          {
            std::cout << "The Theatre is empty.\n";
          }
          else
          {
            std::cout << "The Theatre is not empty.\n";
          }

          //Check if line is empty
          if(m_line->isEmpty())
          {
            std::cout << "The line is empty.\n";
          }
          else
          {
            std::cout << m_line->peekFront() << " is next in the ticket line.\n";
          }

          if(m_theatre->isEmpty())
          {
            std::cout << '\n';
          }
          else
          {
            std::cout << m_theatre->peek() << " will be the first person to leave the Theatre\n";
          }
        }

        //EJECTION - Ejects the people that came into the theatre last
        else if(command == "EJECTION")
        {
          inFile >> eject;
          int eject2 = std::stoi(eject);
          std::cout << std::endl;
          //Doesn't keep priting if there are more than 10 people being ejected
          if(eject2 > 10)
          {
            eject2 = 11;
          }

          if(m_theatre->isEmpty())
          {
            std::cout << "There is nobody in the Theatre to Eject!\n";
          }
          for(int i = 0; i < eject2; i++)
          {
            try
            {
              std::cout << m_theatre->peek() << " left the Theatre\n";
              m_theatre->pop();
            }
            catch(PreconditionViolationException e)
            {
              std::cout << "Can't eject anymore people.\n";
            }
          }
        }

        //Credits - Empties theatre
        else if(command == "CREDITS")
        {
          while(!m_theatre->isEmpty())
          {
            m_theatre->pop();
          }
        }


      }
//-------------------------------------------------------------------
//-------------------------------------------------------------------
    inFile.close();

    }
  }
}






















//Free Space
