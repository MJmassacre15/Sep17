#ifndef Quit_h
#define Quit_h
//------------------------------------------------------------------------------
// Filename: Quit.h
// Description: header-file for the quit command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 26.04.2017
//-----------------------------------------------------------------------------

#include <iostream>
#include "Command.h"

class Quit : Command
{
  private:
  public:
    Quit(std::string name);

    // virtual int execute(GameHandler& game, std::vector<std::string>& params) override;
    virtual int execute(View view, std::vector<std::string>& params) override;
};
#endif
