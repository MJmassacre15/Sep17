#ifndef Buy_h
#define Buy_h
#include <iostream>
#include "Command.h"
//------------------------------------------------------------------------------
// Filename: Buy.h
// Description: header-file for the Buy function
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 03.05.2017
// Last change: 03.05.2017
//-----------------------------------------------------------------------------
#include "Command.h"

class Command;

class Buy : Command{
  private:
    std::string name_;
  public:
    Buy(std::string name);

    // virtual int execute(GameHandler& game, std::vector<std::string>& params) override;
    virtual int execute(std::vector<std::string>& params) override;
    int setvalue_buy(int lemon, int sugar);
};
#endif
