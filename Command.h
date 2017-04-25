//------------------------------------------------------------------------------
// Filename: Command.h
// Description: Class representing a general command
// Authors: Tutors
// Tutor: Tutors
// Group: 42
// Created: 08.08.2011
// Last change: 30.01.2017
//------------------------------------------------------------------------------

#ifndef COMMAND_H_INCLUDED
#define COMMAND_H_INCLUDED

#include "GameHandler.h"

#include <string>
#include <vector>

class GameHandler;

class Command
{
  private:
    //--------------------------------------------------------------------------
    // Private copy constructor

    Command(const Command& original);

    //--------------------------------------------------------------------------
    // Private assignment operator

    Command& operator=(const Command& original);

    //--------------------------------------------------------------------------
    /// Name of this command
    std::string command_name_;

  public:
    //--------------------------------------------------------------------------
    // Constructor

    Command(std::string name);

    //--------------------------------------------------------------------------
    // Destructor

    virtual ~Command();

    //--------------------------------------------------------------------------
    // Executes the command.
    // @param game The game where action should be performed on
    // @param params Possible parameters neede for the execution
    // @return Integer representing the success of the action

    // virtual int execute(GameHandler& game, std::vector<std::string>& params) = 0;
    virtual int execute(std::vector<std::string>& params) = 0;

    //--------------------------------------------------------------------------
    // Getter Methods
    const std::string& getName() const;
};

#endif //COMMAND_H_INCLUDED
