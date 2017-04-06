//-----------------------------------------------------------------------------
// Filename: main.cpp
// Description: -
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Philipp Hafner
// Group: 15626
// Created: 21.03.2017
// Last change: 21.03.2017
//-----------------------------------------------------------------------------

#include <iostream>
#include "EnvironmentalCondition.h"
#include "EnvironmentalEngine.h"
#include "HTMLWriter.h"
#include "HTMLWriterEnvironment.h"

using std::endl;


int main()
{
  EnvironmentalEngine *engine = new EnvironmentalEngine();
  EnvironmentalCondition* condition = engine->createCondition();

  // condition->printVal();

  HTMLWriter* writer = new HTMLWriter("Basis");
  std::cout << writer->writeFile("Basic") << std::endl;

  HTMLWriterEnvironment* writer_Env = new HTMLWriterEnvironment("Umwelt");
  std::cout << writer_Env->writeFile(*condition) << std::endl;

  return 0;
}
