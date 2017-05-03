<<<<<<< HEAD
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

//------------------------------------------------------------------------------
Setweather::Setweather(std::string name) : Setweather(name)
{
}


//------------------------------------------------------------------------------
int Setweather::execute(std::vector<std::string>& params)
{
  int cover = stoi(params[0]);
  int precipitation = stoi(params[1]);
  float temperature = stoi(params[2]);
  int wind = stoi(params[3]);
  setvalue(cover, precipitation, temperature, wind);
  return 0;
}
int Setweather::setvalue(int cover,
             int precipitation,
             int wind,
             float temperature)
{
  std::cout << "Test Setweather\n";
return 0;
}
=======
// //------------------------------------------------------------------------------
// // Filename: Setweather.cpp
// // Description: cpp-file for the Setweather function
// // Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// // Tutor: Roman Walch
// // Group: 15626
// // Created: 03.05.2017
// // Last change: 03.05.2017
// //-----------------------------------------------------------------------------
//
// #include "Setweather.h"
// #include "EnvironmentalCondition.h"
// #include "View.h"
//
// //------------------------------------------------------------------------------
// Setweather::Setweather(std::string name) : Setweather(name)
// {
// }
//
//
// //------------------------------------------------------------------------------
// int Setweather::Setweather(cover, precipitation, wind, temperature)
// {
//
// }
>>>>>>> 19f4691b8ad44deebada22624fbb3066aea5f080
