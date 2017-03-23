//-----------------------------------------------------------------------------
// Filename: EnvironmentalCondition.cpp
// Description: -
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Philipp Hafner
// Group: 15626
// Created: 21.03.2017
// Last change: 21.03.2017
//-----------------------------------------------------------------------------

#include "EnvironmentalCondition.h"
#include <iostream>


EnvironmentalCondition::EnvironmentalCondition(Cover sky_cover, Rank predipitation, float temperature, Rank wind) : sky_cover_(sky_cover), predipitation_(predipitation), temperature_(temperature), wind_(wind)
{}


bool EnvironmentalCondition::isItHot()
{
  if(temperature_ >= (35 - (25 / 3)))
    return true;
  else
    return false;
}

bool EnvironmentalCondition::isItRainy()
{
  if(((predipitation_ == Rank::MEDIUM) ||
      (predipitation_ == Rank::HIGH)) &&
      ((sky_cover_ == Cover::OVERCAST) ||
      (sky_cover_ == Cover::VERY_OVERCAST)))
    return true;
  else
    return false;
}

bool EnvironmentalCondition::isItStormy()
{
  if(((wind_ == Rank::MEDIUM) ||
      (wind_ == Rank::HIGH)) &&
      ((sky_cover_ == Cover::OVERCAST) ||
      (sky_cover_ == Cover::VERY_OVERCAST)))
    return true;
  else
    return false;
}


void EnvironmentalCondition::setSkyCover(Cover cover)
{
  sky_cover_ = cover;
}

void EnvironmentalCondition::setPredipitation(Rank rank)
{
  predipitation_ = rank;
}

void EnvironmentalCondition::setTemperature(float temperature)
{
  temperature_ = temperature;
}

void EnvironmentalCondition::setWind(Rank rank)
{
  wind_ = rank;
}



EnvironmentalCondition::Cover EnvironmentalCondition::getSkyCover()
{
  return sky_cover_;
}

EnvironmentalCondition::Rank EnvironmentalCondition::getPredipitation()
{
  return predipitation_;
}

float EnvironmentalCondition::getTemperature()
{
  return temperature_;
}

EnvironmentalCondition::Rank EnvironmentalCondition::getWind()
{
  return wind_;
}




void EnvironmentalCondition::printVal()
{
  std::cout << "EnvironmentalCondition: " << sky_cover_ << ", " << predipitation_ << ", " << temperature_ << ", " << wind_ << std::endl;
}
