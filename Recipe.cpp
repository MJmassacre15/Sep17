//------------------------------------------------------------------------------
// Filename: Recipe.cpp
// Description: cpp-file for the recipe command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------

#include "Recipe.h"
#include <stdexcept>


//------------------------------------------------------------------------------
Recipe::Recipe(std::string name) : Command(name)
{
}


//------------------------------------------------------------------------------
// try: convert the string from vector[x] to int
//    if exception -> Error message
// then convert the int back to strings, to check if it's a float
//    if yes, then the vector string would be at e.g. 1.2 but the string now 1
//------------------------------------------------------------------------------

// int Recipe::execute(GameHandler& game, std::vector<std::string>& params)
int Recipe::execute(std::vector<std::string>& params)
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
      std::cout << "[ERR] Usage: recipe [lemon] [sugar] [water]\n";
    }

    lemon_ = std::to_string(lemon);
    sugar_ = std::to_string(sugar);
    water_ = std::to_string(water);

    if((lemon_ != params[0]) || (sugar_ != params[1]) || (water_ != params[2]))
    {
      std::cout << "[ERR] Usage: recipe [lemon] [sugar] [water]\n";
    }

  }
  else
  {
    std::cout << "[ERR] Usage: recipe [lemon] [sugar] [water]\n";
  }
  return 0;
}
