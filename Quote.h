#ifndef Quote_h
#define Quote_h
#include <iostream>
#include "Command.h"
//------------------------------------------------------------------------------
// Filename: Quote.h
// Description: header-file for the Qute command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 26.04.2017
//-----------------------------------------------------------------------------

class Quote : Command
{
  private:
    std::string name_;
  public:
    Quote(std::string name);

    // virtual int execute(GameHandler& game, std::vector<std::string>& params) override;
    virtual int execute(std::vector<std::string>& params) override;
};
#endif
