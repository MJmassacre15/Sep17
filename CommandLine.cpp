//------------------------------------------------------------------------------
// Filename: CommandLine.cpp
// Description: cpp-file for the CommadLine check
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 02.05.2017
// Last change: 02.05.2017
//-----------------------------------------------------------------------------
#include <iostream>
#include "CommandLine.h"
#include "View.h"

CommandLine::CommandLine()
{}

CommandLine::~CommandLine()
{}
//------------------------------------------------------------------------------
int CommandLine::check_args(int argc, char* argv[])
{
  View view;
  int iterator = 1;

  if (argc != 4)
  {
    view.view_output(EXIT_2);
    //this check works
    return 2;
  }
  for (; iterator < argc; iterator++)
  {
    char* end;
    long val = strtol(argv[iterator], &end, 10);
    if (argc >= 2 && !end[0] && val >= 0)
    {
      // printf("%s is valid\n", argv[iterator]);
    }
    else
    {
      // printf("%s is invalid\n", argv[iterator]);
      view.view_output(EXIT_2);
      return 2;
    }
  }
  return 0;
}
