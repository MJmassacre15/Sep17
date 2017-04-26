//------------------------------------------------------------------------------
// Filename: Balance.cpp
// Description: cpp-file for the Balance command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 26.04.2017
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
  if(params.size() == 0)
  {
  std::cout << "L: 100" << std::endl;
  std::cout << "S: 100" << std::endl;
  std::cout << "----------" << std::endl;
  std::cout << "C: 1000 $" << std::endl;
  }
  else
  {
     std::cout << "[ERR] Usage: balance\n";
  }
  // for(int i = 0; i < params.size(); i++)
  // {
  //   std::cout << params[i] << std::endl;
  // }

  return 0;
}
