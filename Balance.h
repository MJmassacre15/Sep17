#ifndef Balance_h
#define Balance_h
#include <iostream>
#include "Command.h"
//------------------------------------------------------------------------------
// Filename: Balance.h
// Description: header-file for the Balance command
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------
class Command;

class Balance : Command{
  public:
    Balance(std::string name);
};
#endif
