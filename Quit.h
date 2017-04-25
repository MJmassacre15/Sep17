#ifndef Quit_h
#define Quit_h
#include <iostream>
#include "Command.h"
//------------------------------------------------------------------------------
// Filename: Quit.h
// Description: header-file for the quit command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------


class Command;

class Quit : Command{
  private:
    std::string name_;
  public:
    Quit(std::string name);

    // virtual int execute(GameHandler& game, std::vector<std::string>& params) override;
    virtual int execute(std::vector<std::string>& params) override;
};
#endif
