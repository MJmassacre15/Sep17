//------------------------------------------------------------------------------
// Filename: Quote.cpp
// Description: cpp-file for the Quote command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------

#include "Quote.h"


//------------------------------------------------------------------------------
Quote::Quote(std::string name) : Command(name)
{
}


//------------------------------------------------------------------------------
// int Quote::execute(GameHandler& game, std::vector<std::string>& params)
int Quote::execute(std::vector<std::string>& params)
{
  if(params.size() == 0)
  {
  std::cout << "L: 100 $" << std::endl;
  std::cout << "S: 100 $" << std::endl;
  }
  else
  {
     std::cout << "[ERR] Usage: balance \n";
  }
  return 0;
}
