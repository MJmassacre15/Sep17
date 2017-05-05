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
#include "GameData.h"
#include "View.h"


//------------------------------------------------------------------------------
Buy::Buy(std::string name) : Command(name)
{
}

//------------------------------------------------------------------------------
int Buy::execute(std::vector<std::string>& params)
{
  //Testvariables
  int cash = 5000;
  int lemon_cost = 500;
  int sugar_cost = 500;
  View *view = new View();

  unsigned int lemon = stoi(params[0]);
  unsigned int sugar = stoi(params[1]);

  if (cash < lemon_cost + sugar_cost)
  {
    std::cout << "[WARN] Not enough money. I buy what I can.\n";
    while (cash < lemon_cost + sugar_cost)
    {
      lemon--;
      sugar--;
    }
  }
  else
  {
    view->view_output("Bought:\n");
    view->view_output("L: " + lemon);
    view->view_output("%\n");
    view->view_output("S: " + sugar);
    view->view_output("%\n");
  }

  setvalue_buy(lemon, sugar);
  view->~View();
  return 0;
}


int Buy::setvalue_buy(int lemon, int sugar)
{
  std::cout << "Test Buy\n";
  return 0;
}
