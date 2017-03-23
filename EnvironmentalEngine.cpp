//-----------------------------------------------------------------------------
// Filename: EnvironmentalEngine.cpp
// Description: -
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Philipp Hafner
// Group: 15626
// Created: 21.03.2017
// Last change: 21.03.2017
//-----------------------------------------------------------------------------

#include "EnvironmentalEngine.h"
#include "EnvironmentalCondition.h"


#include <iostream>

 using std::cout;



EnvironmentalCondition EnvironmentalEngine::createCondition()
{
	EnvironmentalCondition *condition = new EnvironmentalCondition(
	(EnvironmentalCondition::Cover)(rand() % 4),
	(EnvironmentalCondition::Rank)(rand() % 4),
	40.3, 
	(EnvironmentalCondition::Rank)(rand() % 4));

	return *condition;
}
