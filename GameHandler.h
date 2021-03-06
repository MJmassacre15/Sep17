#ifndef GameHandler_h
#define GameHandler_h
//-----------------------------------------------------------------------------
// Filename: GameHandler.h
// Description: header-file for the HTMLWriter
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 06.04.2017
// Last change: 06.04.2017
//-----------------------------------------------------------------------------

#include <iostream>
#include "View.h"
#include <vector>

class GameHandler
{
  public:
    //constructor:
    GameHandler();
    ~GameHandler();

    int run();
    int check_command(View &view);
    bool check_error(int error);

    int play(View &view, std::vector<std::string>& params);
};
#endif
