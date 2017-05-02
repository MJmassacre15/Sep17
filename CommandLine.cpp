//------------------------------------------------------------------------------
// Filename: CommandLine.cpp
// Description: cpp-file for the CommadLine check
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 02.05.2017
// Last change: 02.05.2017
//-----------------------------------------------------------------------------

#include "CommandLine.h"
#include "View.h"

//------------------------------------------------------------------------------
CommandLine::CommandLine(std::string name) : CommandLine(name)
{
}


//------------------------------------------------------------------------------
// int Echo::execute(GameHandler& game, std::vector<std::string>& params)
int CommandLine::execute(int argc, char* argv[])
{
  View *view = new View();
  int iterator = 1;
  if (argc != 4)
  {
    return Usage;
  }
  while (iterator < 5)
  {
    if (isdigit(argv[iterator]))
    {
      iterator++;
    }
    else{
      return Usage;
    }
  }
  view->view_output("\n");
  view->~View();
  return 0;
}
