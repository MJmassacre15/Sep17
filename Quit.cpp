//------------------------------------------------------------------------------
// Filename: Quit.cpp
// Description: cpp-file for the quit command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------

#include "Quit.h"


//------------------------------------------------------------------------------
Quit::Quit(std::string name) : Command(name)
{
}


//------------------------------------------------------------------------------
// int Quit::execute(GameHandler& game, std::vector<std::string>& params)
int Quit::execute(std::vector<std::string>& params)
{
  return 0;
}
