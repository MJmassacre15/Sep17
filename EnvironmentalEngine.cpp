//-----------------------------------------------------------------------------
// Filename: EnvironmentalEngine.cpp
// Description: cpp-file for the environmental engine
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------

#include "EnvironmentalEngine.h"
#include "EnvironmentalCondition.h"
#include "View.h"

#include <iostream>


//generates the environmental conditions randomly
EnvironmentalCondition& EnvironmentalEngine::createCondition()
{
  // srand is needed for rand(), won't work properley without srand
  srand((unsigned)time(NULL));
  float temperature = rand() % 250 + 100;
  temperature = temperature / 10;

  EnvironmentalCondition* condition = nullptr;

  try
  {
    condition = new EnvironmentalCondition(
      (EnvironmentalCondition::Cover)(rand() % 4),
      (EnvironmentalCondition::Rank)(rand() % 4),
      temperature,
      (EnvironmentalCondition::Rank)(rand() % 4));
  }
  catch(std::bad_alloc)
  {
    View view;
    view.view_output("[ERR] Out of memory.\n");
  }
  return *condition;
}
