#ifndef EnvironmentalEngine_h
#define EnvironmentalEngine_h

//-----------------------------------------------------------------------------
// Filename: EnvironmentalEngine.h
// Description: header-file for the environmental engine
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------
#include "EnvironmentalCondition.h"

class EnvironmentalEngine
{
  public:
    EnvironmentalCondition* createCondition();

};
#endif
