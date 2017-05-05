//------------------------------------------------------------------------------
// Filename: Setweather.cpp
// Description: cpp-file for the Setweather function
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 03.05.2017
// Last change: 03.05.2017
//-----------------------------------------------------------------------------

#include "Setweather.h"
#include "EnvironmentalCondition.h"
#include "View.h"
#include <stdexcept>
#include <iomanip>
#include <sstream>

//------------------------------------------------------------------------------
Setweather::Setweather(std::string name) : Command(name)
{}


//------------------------------------------------------------------------------
int Setweather::execute(std::vector<std::string>& params)
{
  View *view = new View();
  if(params.size() == 4)
  {
    int cover, precipitation, temperature;
    float wind;
    std::string cover_, precipitation_, temperature_, wind_;
    std::stringstream wind_2;

    try
    {
      cover = std::stoi(params[0]);
      precipitation = std::stoi(params[1]);
      temperature = std::stoi(params[2]);
      wind = std::stof(params[3]);
    }
    catch(std::invalid_argument)
    {
      view->~View();
      return 1;
    }

    cover_ = std::to_string(abs(cover));
    precipitation_ = std::to_string(abs(precipitation));
    temperature_ = std::to_string(abs(temperature));
    wind_2 << wind;
    wind_ = wind_2.str();

    if((cover_ != params[0]) || (precipitation_ != params[1]) ||
       (temperature_ != params[2]) || (wind_ != params[3]))
    {
      return 1;
    }
    else
    {
      setvalue(cover, precipitation, temperature, wind);
      return 0;
    }
  }
  else
  {
    view->~View();
    return 2;
  }
}




int Setweather::setvalue(int cover, int precipitation, int wind,
                         float temperature)
{
  return 0;
}
