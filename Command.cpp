//------------------------------------------------------------------------------
// Filename: Command.cpp
// Description: cpp-file for command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 26.04.2017
//------------------------------------------------------------------------------

#include "Command.h"



//------------------------------------------------------------------------------
Command::Command(std::string name) : command_name_(name)
{
  // if(name == "Balance")
  // {
  //   // Balance *balance = new Balance("Balance");
  //   // balance->execute(game, params[count]);
  // }
}

//------------------------------------------------------------------------------
Command::~Command()
{
}

//------------------------------------------------------------------------------
const std::string &Command::getName() const
{
  return command_name_;
}
//
// int execute(GameHandler& game, std::vector<std::string>& params)
// {
//  return 0;
// }
//
