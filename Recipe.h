#ifndef Recipe_h
#define Recipe_h
//------------------------------------------------------------------------------
// Filename: Recipe.h
// Description: header-file for the recipe command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 26.04.2017
//-----------------------------------------------------------------------------

#include <iostream>
#include "Command.h"

class Recipe : Command
{
  private:
    std::string name_;
  public:
    Recipe(std::string name);

    // virtual int execute(GameHandler& game, std::vector<std::string>& params) override;
    virtual int execute(std::vector<std::string>& params) override;
};
#endif
