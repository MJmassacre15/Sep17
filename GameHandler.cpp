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

int GameHandler::run()
{
//------------------------------------------------------------------------------
// Variablen:
//  run - so lange rennt das Spiel
//  command - Command, der eingegeben wird, dazu der Name und eine temporäre Variable
//  count - oder auch: Anzahl der übergebenen Parameter(-1 ist der Parameter_Name)
//  empty - nach Leerzeichen wird im Eingabestring gesucht
//  position - Positionen der Leerzeichen etc.
//  params_vec - Vector für die eingegebenen Parameter
//------------------------------------------------------------------------------
  bool run = true;
  std::string command, command_name, temp;
  int count;
  std::string empty = " ";
  size_t position;
  std::vector<std::string> params_vec;


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
    params_vec.clear();
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
          params_vec.push_back(temp);
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
        params_vec.push_back(temp);
      }
      count++;
    }

//------------------------------------------------------------------------------
// Folgend wird auf Parametername, richtige Parameteranzahl und richtige
// Parameterart überprüft und die jeweilige Funktion aufgerufen.
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
      recipe->execute(params_vec);
    }
    if((command_name == "quit"))
    {
      Quit *quit = new Quit("Quit");
      quit->execute(params_vec);
    }
  }
  return 0;
}
