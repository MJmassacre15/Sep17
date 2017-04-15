//-----------------------------------------------------------------------------
// Filename: GameHandler.cpp
// Description: cpp-file for the GameHandler
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 06.04.2017
// Last change: 06.04.2017
//-----------------------------------------------------------------------------

#include "GameHandler.h"
#include <iostream>
#include <fstream>
#include <algorithm>

GameHandler::GameHandler()
{}

void GameHandler::run(){
  bool run = true;
  std::string command;

  while(run == true)
  {
    std::cout << "sep> ";
    std::getline (std::cin, command);
    command.erase(std::remove_if( command.begin(), command.end(), ::isspace ), command.end() );

    if(command == "echo")
    {
    }
    if(command == "balance")
    {
    }
    if(command == "quote")
    {
    }
    if(command == "recipe")
    {
    }
    if(command == "quit")
    {
      run = false;
    }
    std::cout << command << std::endl;
  }
}
