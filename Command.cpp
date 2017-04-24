//------------------------------------------------------------------------------
// Filename: Command.cpp
// Description: Class representing a general command
// Authors: Tutors
// Tutor: Tutors
// Group: 42
// Created: 02.09.2011
// Last change: 02.09.2011
//------------------------------------------------------------------------------

#include "Command.h"
#include "Balance.h"


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

int execute(GameHandler& game, std::vector<std::string>& params)
{
 return 0;
}
