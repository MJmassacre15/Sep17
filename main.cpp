//-----------------------------------------------------------------------------
// Filename: main.cpp
// Description: -
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Philipp Hafner
// Group: 15626
// Created: 21.03.2017
// Last change: 26.04.2017
//-----------------------------------------------------------------------------


#include "GameHandler.h"
#include "CommandLine.h"


int main(int argc, char* argv[])
{
  CommandLine commandlinecheck;

  if ((commandlinecheck.check_args(argc, argv)) != 2)
  {
    GameHandler game;
    game.run();
  }
  return 0;
}
