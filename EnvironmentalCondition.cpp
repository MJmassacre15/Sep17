//-----------------------------------------------------------------------------
// Filename: EnvironmentalCondition.cpp
// Description: cpp-file for the environmental condition
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------

#include "EnvironmentalCondition.h"
#include <iostream>


EnvironmentalCondition::EnvironmentalCondition(Cover sky_cover, 
  Rank predipitation, float temperature, Rank wind) : 
  sky_cover_(sky_cover), 
  predipitation_(predipitation), 
  temperature_(temperature), 
  wind_(wind)
{}

//checks if the temperature is higher than the threshold
bool EnvironmentalCondition::isItHot()
{
  if(temperature_ >= (35 - (25 / 3)))
    return true;
  else
    return false;
}
//checks if the predipitation is high enough and if the sky is coverd
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
//checks if the wind is strong enough and if the sky is coverd
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

//calls skycover setter
void EnvironmentalCondition::setSkyCover(Cover cover)
{
  sky_cover_ = cover;
}
//calls predipitation setter
void EnvironmentalCondition::setPredipitation(Rank rank)
{
  predipitation_ = rank;
}
//calls temperature setter
void EnvironmentalCondition::setTemperature(float temperature)
{
  temperature_ = temperature;
}
//calls wind setter
void EnvironmentalCondition::setWind(Rank rank)
{
  wind_ = rank;
}


//calls sky_cover getter
EnvironmentalCondition::Cover EnvironmentalCondition::getSkyCover()
{
  return sky_cover_;
}
//calls predipitation getter
EnvironmentalCondition::Rank EnvironmentalCondition::getPredipitation()
{
  return predipitation_;
}
//calls temperature_ getter
float EnvironmentalCondition::getTemperature()
{
  return temperature_;
}
//calls wind_ getter
EnvironmentalCondition::Rank EnvironmentalCondition::getWind()
{
  return wind_;
}



// used for debugging
// void EnvironmentalCondition::printVal()
// {
//   std::cout << "EnvironmentalCondition: " 
//   << sky_cover_ << ", " 
//   << predipitation_ << ", " 
//   << temperature_ << ", " 
//   << wind_ << std::endl;
// }
