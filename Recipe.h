#ifndef Recipe_h
#define Recipe_h
#include <iostream>
#include "Command.h"
//------------------------------------------------------------------------------
// Filename: Recipe.h
// Description: header-file for the recipe command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------


class Command;

class Recipe : Command{
  private:
    std::string name_;
  public:
    Recipe(std::string name);

    // virtual int execute(GameHandler& game, std::vector<std::string>& params) override;
    virtual int execute(std::vector<std::string>& params) override;
};
#endif
