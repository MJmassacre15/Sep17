#ifndef Buy_h
#define Buy_h
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

class Buy : Command
{
  private:
  public:
    Buy(std::string name);

    // virtual int execute(GameHandler& game, std::vector<std::string>& params) override;
    virtual int execute(View view, std::vector<std::string>& params) override;
    int setvalue_buy(int lemon, int sugar);
};

#endif
