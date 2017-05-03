//------------------------------------------------------------------------------
// Filename: Buy.cpp
// Description: cpp-file for the Buy function
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 03.05.2017
// Last change: 03.05.2017
//-----------------------------------------------------------------------------

#include "Buy.h"

//------------------------------------------------------------------------------
Buy::Buy(std::string name) : Command(name)
{
}

//------------------------------------------------------------------------------
int Buy::execute(std::vector<std::string>& params)
{
  unsigned int lemon = stoi(params[0]);
  unsigned int sugar = stoi(params[1]);

  setvalue_buy(lemon, sugar);
  return 0;
}
int Buy::setvalue_buy(int lemon, int sugar)
{
  std::cout << "Test Buy\n";
return 0;
}
