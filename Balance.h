#ifndef Balance_h
#define Balance_h
//------------------------------------------------------------------------------
// Filename: Balance.h
// Description: header-file for the Balance command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------

#include <iostream>
#include "Command.h"

class Balance : Command
{
  private:
  public:
    Balance(std::string name);

    // virtual int execute(GameHandler& game, std::vector<std::string>& params) override;
    virtual int execute(View view, std::vector<std::string>& params) override;
    // const std::string& getName();
};
#endif
