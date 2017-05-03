//------------------------------------------------------------------------------
// Filename: Quit.cpp
// Description: cpp-file for the quit command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 26.04.2017
//-----------------------------------------------------------------------------

#include "Quit.h"
#include "View.h"


//------------------------------------------------------------------------------
Quit::Quit(std::string name) : Command(name)
{
}


//------------------------------------------------------------------------------
// int Quit::execute(GameHandler& game, std::vector<std::string>& params)
int Quit::execute(std::vector<std::string>& params)
{
  View *view = new View();
  if(params.size() == 0)
  {
    view->view_output("Going out of business!\n");
    view->~View();
    return 0;
  }
  else
  {
      view->view_output("[ERR] Usage: quit\n");
  }
  view->~View();
  return 1;
}
