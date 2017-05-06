//------------------------------------------------------------------------------
// Filename: View.cpp
// Description: cpp-file for the echo command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------

#include <iostream>
#include "View.h"
#include "HTMLWriterBalance.h"
#include "HTMLWriterEnvironment.h"

//------------------------------------------------------------------------------
View::View()
{
}

//------------------------------------------------------------------------------
View::~View()
{
}

//------------------------------------------------------------------------------
void View::view_output(std::string output)
{
  std::cout << output;
}


std::string View::view_input()
{
  std::string command;
  std::getline (std::cin, command);
  return command;
}

void View::write_html_balance(int lemon, int sugar, int cash, int delta)
{
  HTMLWriterBalance writer_Bal("Balance.html");
  writer_Bal.writeFile(lemon, sugar, cash, delta);
}

void View::write_html_environment(EnvironmentalCondition &condition)
{
  HTMLWriterEnvironment writer_Env("Umwelt.html");
  writer_Env.writeFile(condition);
}
