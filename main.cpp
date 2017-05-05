//-----------------------------------------------------------------------------
// Filename: main.cpp
// Description: -
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Philipp Hafner
// Group: 15626
// Created: 21.03.2017
// Last change: 26.04.2017
//-----------------------------------------------------------------------------

#include <iostream>
#include "EnvironmentalCondition.h"
#include "EnvironmentalEngine.h"
#include "HTMLWriter.h"
#include "HTMLWriterEnvironment.h"
#include "HTMLWriterBalance.h"
#include "GameHandler.h"
#include "View.h"
#include "CommandLine.h"


int main(int argc, char* argv[])
{
  // int lemon = 10;
  // int sugar = 5;
  // int cash = 100;
  // int delta = 19;

  // EnvironmentalEngine *engine = new EnvironmentalEngine();
  // EnvironmentalCondition* condition = engine->createCondition();
  //
  // HTMLWriter* writer = new HTMLWriter("Basis.html");
  // writer->writeFile("Basic");
  //
  // HTMLWriterEnvironment* writer_Env = new HTMLWriterEnvironment("Umwelt");
  // writer_Env->writeFile(*condition);
  //
  // HTMLWriterBalance* writer_Bal = new HTMLWriterBalance("Balance");
  // writer_Bal->writeFile(lemon, sugar, cash, delta);



  // commandlinecheck->check_args(argc, argv);
  // View *view = new View();
  // if (commandlinecheck != 0)
  // {
  //   view->view_output("sep> ERROR: USAGE Trump4Prez n");
  // }

  CommandLine *commandlinecheck = new CommandLine();

  if ((commandlinecheck->check_args(argc, argv)) != 2)
  {
    GameHandler *game = new GameHandler();
    game->run();
    game->~GameHandler();
  }
  return 0;
}
