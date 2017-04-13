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
#include "HTMLWriterBalance.h"

using std::endl;


int main()
{
  EnvironmentalEngine *engine = new EnvironmentalEngine();
  EnvironmentalCondition* condition = engine->createCondition();
  int lemon = 5;
  int sugar = 69;
  int cash = 666;
  int delta = 13;

  // condition->printVal();

  HTMLWriter* writer = new HTMLWriter("Basis");
  writer->writeFile("Basic");

  HTMLWriterEnvironment* writer_Env = new HTMLWriterEnvironment("Umwelt");
  writer_Env->writeFile(*condition);

  HTMLWriterBalance* writer_Bal = new HTMLWriterBalance("Balance");
  writer_Bal->writeFile(lemon, sugar, cash, delta);

  return 0;
}
