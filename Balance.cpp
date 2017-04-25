//------------------------------------------------------------------------------
// Filename: Balance.cpp
// Description: cpp-file for the Balance command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------

#include "Balance.h"


//------------------------------------------------------------------------------
Balance::Balance(std::string name) : Command(name)
{
}


//------------------------------------------------------------------------------
// int Balance::execute(GameHandler& game, std::vector<std::string>& params)
int Balance::execute(std::vector<std::string>& params)
{
  std::cout << "Balance Parameter:" << std::endl;
  for(int i = 0; i < params.size(); i++)
  {
    std::cout << params[i] << std::endl;
  }

  return 0;
}
