//------------------------------------------------------------------------------
// Filename: Echo.cpp
// Description: cpp-file for the echo command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 26.04.2017
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
  int j = params.size();
  for(int i = 0; i < j; i++)
  {
    if(i == 0)
    {
      std::cout << params[i];
    }
    else
    {
      std::cout << " " << params[i];
    }
  }
  std::cout << "\n";
  return 0;
}
