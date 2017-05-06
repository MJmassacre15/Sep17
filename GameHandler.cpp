//-----------------------------------------------------------------------------
// Filename: GameHandler.cpp
// Description: cpp-file for the GameHandler
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 06.04.2017
// Last change: 26.04.2017
//-----------------------------------------------------------------------------

#include "View.h"
#include "GameHandler.h"
#include "HTMLWriterBalance.h"
#include "HTMLWriterEnvironment.h"
#include "EnvironmentalEngine.h"
#include "EnvironmentalCondition.h"
#include "Command.h"
#include "Balance.h"
#include "Recipe.h"
#include "Quote.h"
#include "Quit.h"
#include "Echo.h"
#include "Setweather.h"
#include <iostream>
#include <fstream>
#include <algorithm>

#include <string>
#include <vector>

//------------------------------------------------------------------------------
// constructor
GameHandler::GameHandler()
{}

//------------------------------------------------------------------------------
// destructor
GameHandler::~GameHandler()
{}

//------------------------------------------------------------------------------
// function run() : runs the game
// variabls
//  run - as long, as the game runs
//  error - errors from execute commands
//------------------------------------------------------------------------------
int GameHandler::run()
{
  bool run = true;
  int error;
  View view;

  while(run == true)  // only stopped by QUIT
  {
    view.view_output("sep> ");
    error = check_command(view);
    run = check_error(error);
  }
  return 0;
}

//------------------------------------------------------------------------------
// function play : calcs some data and sets new round
//------------------------------------------------------------------------------
int GameHandler::play(View &view, std::vector<std::string>& params)
{
  if(params.size() == 0)
  {
    std::cout << "New round!" << std::endl;
    std::cout << "Lagerbestände werden neu berechnet" << std::endl;

    EnvironmentalEngine *engine = nullptr;
    try
    {
      engine = new EnvironmentalEngine();
    }
    catch(std::bad_alloc)
    {
      view.view_output("[ERR] Out of memory.\n");
    }
    view.write_html_environment(engine->createCondition());

    return 0;
  }
  else
  {
    view.view_output("[ERR] Usage: play\n");
  }
  return 1;
}


//------------------------------------------------------------------------------
// function check_command: checks input if it is a valid command and executes it
// variabls
//  run - as long, as the game runs
//  command - input command and the name and temp variabls
//  count - number of inputed paramteres (command_name is count -1)
//  empty - just the blank space
//  position - position of the blank spaces
//  params_vec - vector for the given params
//------------------------------------------------------------------------------
int GameHandler::check_command(View &view)
{
  std::string command, command_name, temp;
  int count;
  std::string empty = " ";
  size_t position;
  std::vector<std::string> params_vec;
  command = (view.view_input()) + empty;

  //----------------------------------------------------------------------------
  // really supid workaround for our problem, that find() cant find the end
  //   of the input vector
  // The command_name have to be called "", because it would be taken from the
  //  former loop
  // Count (= number of params) must be set to -1.
  //----------------------------------------------------------------------------
  command_name = "";
  count = -1;
  params_vec.clear();

  //----------------------------------------------------------------------------
  // Finding blank spaces and ignore them, so the inpute can be splitted
  // [-1]  command name
  // [0]  from her given parameters
  //      e.g.: 1 parameter, stored in params[0]
  //----------------------------------------------------------------------------
  while((position = command.find(empty)) != std::string::npos)
  {
    temp = command.substr(0, position);
    if(temp != "")
    {
      if(count == -1)
      {
        command_name = temp;
      }
      else
      {
        params_vec.push_back(temp);
      }
      count++;
    }
    command.erase(0, position + empty.length());
  }
  //----------------------------------------------------------------------------
  // Loop ends, but the last part of the command wasn't checked.
  // Same check as in while-loop
  //----------------------------------------------------------------------------
  if(command != "")
  {
    if(count == -1)
    {
      command_name = command;
    }
    else
    {
      params_vec.push_back(temp);
    }
    count++;
  }

  std::transform(command_name.begin(), command_name.end(), command_name.begin(),
            ::tolower);

  //----------------------------------------------------------------------------
  // Check if command name, number of parameters and format of the parameters
  // are correct and if so, the called command is executed
  //
  // first create all command objects
  //----------------------------------------------------------------------------

  Echo echo ("Echo");
  Balance balance ("Balance");
  Quote quote ("Quote");
  Recipe recipe ("Recipe");
  Setweather setweather ("Setweather");
  Quit quit ("Quit");

  //----------------------------------------------------------------------------
  if(command_name == "play")
  {
    play(view, params_vec);
  }
  else if(command_name == "echo")
  {
    echo.execute(view, params_vec);
  }
  else if((command_name == "balance"))
  {
    balance.execute(view, params_vec);
  }
  else if((command_name == "quote"))
  {
    quote.execute(view, params_vec);
  }
  else if((command_name == "recipe"))
  {
    switch(recipe.execute(view, params_vec))
    {
      case 2:
        view.view_output("[ERR] Usage: recipe [lemon] [sugar] [water]\n");
        break;
      case 1:
        view.view_output("[ERR] The sum of parts must be 100.\n");
        break;
    }
  }
  else if((command_name == "setweather"))
  {
    switch(setweather.execute(view, params_vec))
    {
      case 2:
        view.view_output("[ERR] Usage: setweather [cover] [precipitation] [temperature] [wind]\n");
        break;
      case 1:
      view.view_output("[ERR] Wrong parameter.\n");
        break;
    }
  }
  else if(command_name == "quit")
  {
    if(quit.execute(view, params_vec) == 0)
    {
      return 0;
    }
  }
  else if(command_name != "")
  {
    view.view_output("[ERR] Unknown command.\n");
  }
return 1;
}



// check errors
bool GameHandler::check_error(int error)
{
  if(error == 0)
  {
    return false;
  }
  else
  {
    return true;
  }
}
