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
#include "View.h"
// #include "GameData.h"


//------------------------------------------------------------------------------
Balance::Balance(std::string name) : Command(name)
{
}


//------------------------------------------------------------------------------
// int Balance::execute(GameHandler& game, std::vector<std::string>& params)
int Balance::execute(View view, std::vector<std::string>& params)
{
  if(params.size() == 0)
  {
    view.view_output("L: 100\n");
    view.view_output("S: 100\n");
    view.view_output("----------\n");
    view.view_output("C: 1000 $\n");
    view.view_output("B: 1000 $\n");
  }
  else
  {
    view.view_output(ERROR_7);
  }
  return 0;
}


// const std::string &Balance::getName()
// {
//   return command_name_;
// }
