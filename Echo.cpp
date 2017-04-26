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
#include "View.h"



//------------------------------------------------------------------------------
Echo::Echo(std::string name) : Command(name)
{
}


//------------------------------------------------------------------------------
// int Echo::execute(GameHandler& game, std::vector<std::string>& params)
int Echo::execute(std::vector<std::string>& params)
{
  View *view = new View();
  int j = params.size();
  for(int i = 0; i < j; i++)
  {
    if(i == 0)
    {
      view->view_output(params[i]);
    }
    else
    {
      view->view_output(" " + params[i]);
    }
  }
  view->view_output("\n");
  view->~View();
  return 0;
}
