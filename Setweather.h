#ifndef Setweather_h
#define Setweather_h
#include <iostream>
#include "Command.h"
//------------------------------------------------------------------------------
// Filename: Setweather.h
// Description: header-file for the Setweather function
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 03.05.2017
// Last change: 03.05.2017
//-----------------------------------------------------------------------------


class Command;

class Setweather : Command{
  private:
    std::string name_;
  public:
    Setweather(std::string name);

    // virtual int execute(GameHandler& game, std::vector<std::string>& params) override;
    virtual int execute(std::vector<std::string>& params) override;
    int setvalue(int cover,
                 int precipitation,
                 int wind,
                 float temperature);
};
#endif
