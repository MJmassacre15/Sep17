//------------------------------------------------------------------------------
// Filename: Quote.cpp
// Description: cpp-file for the Quote command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 26.04.2017
//-----------------------------------------------------------------------------

#include "Quote.h"
#include "View.h"


//------------------------------------------------------------------------------
Quote::Quote(std::string name) : Command(name)
{}


//------------------------------------------------------------------------------
// int Quote::execute(GameHandler& game, std::vector<std::string>& params)
int Quote::execute(View view, std::vector<std::string>& params)
{
  if(params.size() == 0)
  {
    // std::cout << "L: 100 $" << std::endl;
    view.view_output("L: 100 $\n");

    // std::cout << "S: 100 $" << std::endl;
    view.view_output("S: 100 $\n");
  }
  else
  {
    //  std::cout << "[ERR] Usage: quote\n";
    view.view_output(ERROR_8);
  }
  return 0;
}
