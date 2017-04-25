//------------------------------------------------------------------------------
// Filename: Echo.cpp
// Description: cpp-file for the echo command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------

#include "Echo.h"


//------------------------------------------------------------------------------
Echo::Echo(std::string name) : Command(name)
{
}


//------------------------------------------------------------------------------
// int Echo::execute(GameHandler& game, std::vector<std::string>& params)
int Echo::execute(std::vector<std::string>& params)
{
  for(int i = 0; i < params.size(); i++)
  {
    std::cout << params[i] << std::endl;
  }
  return 0;
}
