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
  return 0;
}
