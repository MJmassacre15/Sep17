//------------------------------------------------------------------------------
// Filename: Recipe.cpp
// Description: cpp-file for the recipe command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 26.04.2017
//-----------------------------------------------------------------------------

#include "Recipe.h"
#include "View.h"
#include <stdexcept>


//------------------------------------------------------------------------------
Recipe::Recipe(std::string name) : Command(name)
{}


//------------------------------------------------------------------------------
// try: convert the string from vector[x] to int
//    if exception -> Error message
// then convert the int back to strings, to check if it's a float
//    if yes, then the vector string would be at e.g. 1.2 but the string now 1
//------------------------------------------------------------------------------

// int Recipe::execute(GameHandler& game, std::vector<std::string>& params)
int Recipe::execute(View view, std::vector<std::string>& params)
{
  if(params.size() == 3)
  {
    int lemon, sugar, water;
    std::string lemon_, sugar_, water_;
    try
    {
      lemon = std::stoi(params[0]);
      sugar = std::stoi(params[1]);
      water = std::stoi(params[2]);
    }
    catch(std::invalid_argument)
    {
      return 2;
    }

    lemon_ = std::to_string(abs(lemon));
    sugar_ = std::to_string(abs(sugar));
    water_ = std::to_string(abs(water));

    if((lemon_ != params[0]) || (sugar_ != params[1]) || (water_ != params[2]))
    {
      return 2;
    }
    else if ((lemon + sugar + water) != 100)
    {
      return 1;
    }
    else
    {
      view.view_output("L: " + lemon_);
      view.view_output("%\n");
      view.view_output("S: " + sugar_);
      view.view_output("%\n");
      view.view_output("W: " + water_);
      view.view_output("%\n");
    }
  }
  else
  {
    return 2;
  }
  return 0;
}
