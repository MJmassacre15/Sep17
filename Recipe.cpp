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


//------------------------------------------------------------------------------
Recipe::Recipe(std::string name) : Command(name)
{
}


//------------------------------------------------------------------------------
// int Recipe::execute(GameHandler& game, std::vector<std::string>& params)
int Recipe::execute(std::vector<std::string>& params)
{
  return 0;
}
