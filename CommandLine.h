#ifndef CommandLine_h
#define CommandLine_h
//------------------------------------------------------------------------------
// Filename: CommandLine.h
// Description: header-file for the CommadLine check
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 02.05.2017
// Last change: 02.05.2017
//-----------------------------------------------------------------------------

#include "View.h"

class CommandLine
{
  public:
    //constructor:
    CommandLine();

    //Destructor:
    ~CommandLine();

    int check_args(int argc, char* argv[]);
};
#endif
