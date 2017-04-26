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
#include "Command.h"
#include "Balance.h"
#include "Recipe.h"
#include "Quote.h"
#include "Quit.h"
#include "Echo.h"
#include <iostream>
#include <fstream>
#include <algorithm>

#include <string>
#include <vector>

GameHandler::GameHandler()
{}

GameHandler::~GameHandler()
{}

int GameHandler::run()
{
//------------------------------------------------------------------------------
// variabls
//  run - as long, as the game runs
//  command - input command and the name and temp variabls
//  count - number of inputed paramteres (command_name is count -1)
//  empty - just the blank space
//  position - position of the blank spaces
//  params_vec - vector for the given params
//------------------------------------------------------------------------------
  bool run = true;
  std::string command, command_name, temp;
  int count;
  std::string empty = " ";
  size_t position;
  std::vector<std::string> params_vec;
  View *view = new View();

  while(run == true)  // only stopped by QUIT
  {
    view->view_output("sep> ");

    command = (view->view_input()) + empty;
    //really supid workaround for our problem, that find() cant find the end
    //of the input vector

//------------------------------------------------------------------------------
// The command_name have to be called "", because it would be taken from the
// former loop
// Count (= number of params) must be set to -1.
//------------------------------------------------------------------------------
    command_name = "";
    count = -1;
    params_vec.clear();
//------------------------------------------------------------------------------
// Finding blank spaces and ignore them, so the inpute can be splitted
// [-1]  command name
// [0]  from her given parameters
//      e.g.: 1 parameter, stored in params[0]
//------------------------------------------------------------------------------
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
//------------------------------------------------------------------------------
// Loop ends, but the last part of the command wasn't checked.
// Same check as in while-loop
//------------------------------------------------------------------------------
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
//------------------------------------------------------------------------------
// Check if command name, number of parameters and format of the parameters
// are correct and if so, the called command is executed
//------------------------------------------------------------------------------
    if(command_name == "echo")
    {
      Echo *echo = new Echo("Echo");
      echo->execute(params_vec);
    }
    if((command_name == "balance"))
    {
      Balance *balance = new Balance("Balance");
      balance->execute(params_vec);
    }
    if((command_name == "quote"))
    {
      Quote *quote = new Quote("Quote");
      quote->execute(params_vec);
    }
    if((command_name == "recipe"))
    {
      Recipe *recipe = new Recipe("Recipe");

      switch(recipe->execute(params_vec))
      {
        case 2:
          view->view_output("[ERR] Usage: recipe [lemon] [sugar] [water]\n");
          break;
        case 1:
          view->view_output("[ERR] The sum of parts must be 100.\n");
          break;
      }
    }
    if((command_name == "quit"))
    {
      Quit *quit = new Quit("Quit");
      if(quit->execute(params_vec) == 0)
      {
        view->~View();
        return 0;
      }
    }
  }
  return 0;
}
