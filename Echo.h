#ifndef Echo_h
#define Echo_h
#include <iostream>
#include "Command.h"
//------------------------------------------------------------------------------
// Filename: Echo.h
// Description: header-file for the echo command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 26.04.2017
//-----------------------------------------------------------------------------

class Command;

class Echo : Command{
  private:
    std::string name_;
  public:
    Echo(std::string name);

    // virtual int execute(GameHandler& game, std::vector<std::string>& params) override;
    virtual int execute(std::vector<std::string>& params) override;
};
#endif
