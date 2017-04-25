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
#include "Command.h"
#include "Balance.h"
#include <iostream>
#include <fstream>
#include <algorithm>

#include <string>
#include <vector>

GameHandler::GameHandler()
{}

int GameHandler::run(){
//------------------------------------------------------------------------------
// Variablen:
//  run - so lange rennt das Spiel
//  command - Command, der eingegeben wird, dazu der Name und eine temporäre Variable
//  count - oder auch: Anzahl der übergebenen Parameter(-1 ist der Parameter_Name)
//  empty - nach Leerzeichen wird im Eingabestring gesucht
//  position - Positionen der Leerzeichen etc.
//  params - Array für die eingegebenen Parameter
//------------------------------------------------------------------------------
  bool run = true;
  std::string command, command_name, temp;
  int count;
  std::string empty = " ";
  size_t position;
  std::string params[10];

  while(run == true)  // wird NUR durch "quit" abgebrochen
  {
    std::cout << "sep> ";

    std::getline (std::cin, command);

//------------------------------------------------------------------------------
// Der command_name muss immer auf "" gesetzt werden, da er sonst von der
// vorherigen Schleife mitübernommen wird.
// Count, also Parameteranzahl muss auf -1 gesetzt werden.
//------------------------------------------------------------------------------
    command_name = "";
    count = -1;

//------------------------------------------------------------------------------
// Leerzeichen suchen/ignorieren und die Eingabe unterteilen in:
// [-1] Commando-Name
// [0]  ab hier die eingegebenen Parameter
//      z.B.: 1 Parameter, wird in params[0] gespeichert.
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
          params[count] = temp;
        }
        count++;
      }
      command.erase(0, position + empty.length());
    }
//------------------------------------------------------------------------------
// Schleife endet, aber der letzte Teil der commands wurde nicht überprüft:
// Hier wird gleich überprüft wie in der Schleife.
//------------------------------------------------------------------------------
    if(command != "")
    {
      if(count == -1)
      {
        command_name = command;
      }
      else
      {
        params[count] = command;
      }
      count++;
    }

//------------------------------------------------------------------------------
// Folgend wird auf Parametername, richtige Parameteranzahl und richtige
// Parameterart überprüft und die jeweilige Funktion aufgerufen.
//------------------------------------------------------------------------------
    if(command_name == "echo")
    {
      std::cout << "Echo mit " << count << " Parametern: OK" << std::endl;
      return 5;
    }
    if((command_name == "balance"))
    {
      // Command *commando = new Command("Balance");

      Balance *balance = new Balance("Balance");
      // balance->execute(game, params[count]);
      // std::cout << "Balance mit 0 Parametern: OK" << std::endl;
      // return 1;
    }
    if((command_name == "quote") && (count == 0))
    {
      std::cout << "Quote mit 0 Parametern: OK" << std::endl;
      return 2;
    }
    if((command_name == "recipe") && (count == 3))
    {
      std::cout << "Recipe mit 3 Parametern: OK" << std::endl;
      return 3;
    }
    if((command_name == "quit") && (count == 0))
    {
      run = false;
      std::cout << "Going out of business!\n";
      std:: cout << "Parameter: " << count << std::endl;
      return 0;
    }
    else
    {
      if(command_name != "")
      {
        std::cout << "[ERR] Usage: [CommandName] [param1] [param2] ... \n";
      }
    }
  }
  return 4;
}
