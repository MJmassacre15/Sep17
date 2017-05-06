//-----------------------------------------------------------------------------
// Filename: HTMLWriterEnvironment.cpp
// Description: cpp-file for the HTMLWriterEnvironment
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 06.04.2017
// Last change: 18.04.2017
//-----------------------------------------------------------------------------
#include "EnvironmentalCondition.h"
#include "HTMLWriterEnvironment.h"
#include <iostream>
#include <fstream>


HTMLWriterEnvironment::HTMLWriterEnvironment(std::string filename) :
HTMLWriter (filename)
{}

//------------------------------------------------------------------------------
// Ruft die writeFile Funktion auf
//------------------------------------------------------------------------------
void HTMLWriterEnvironment::writeFile(EnvironmentalCondition ec)
{
  std::ofstream environment_html;
  //----------------------------------------------------------------------------
  // Gibt den filenamen an
  //----------------------------------------------------------------------------
  environment_html.open(HTMLWriterEnvironment::filename_);
  if (environment_html != 0)
  {
    std::string wind_val, precipitation_val, sky_cover_val;
    bool hot, rainy, stormy;
    std::string hot_val, rainy_val, stormy_val;

    //get temperature
    float temperature_val = ec.getTemperature();

    //----------------------------------------------------------------------------
    // Bekommt die Windverhältnisse und ordnet die Werte zu
    //----------------------------------------------------------------------------
    EnvironmentalCondition::Rank wind = ec.getWind();
    switch(wind)
    {
      case EnvironmentalCondition::Rank::NONE :
        wind_val = "None";
        break;
      case EnvironmentalCondition::Rank::LOW :
        wind_val = "Low";
        break;
      case EnvironmentalCondition::Rank::MEDIUM :
        wind_val = "Medium";
        break;
      case EnvironmentalCondition::Rank::HIGH :
        wind_val = "High";
    }

    //----------------------------------------------------------------------------
    // Bekommt die Niederschlagsmenge und ordnet die Werte zu
    //----------------------------------------------------------------------------
    EnvironmentalCondition::Rank precipitation = ec.getPredipitation();
    switch(precipitation)
    {
      case EnvironmentalCondition::Rank::NONE:
        precipitation_val = "None";
        break;
      case EnvironmentalCondition::Rank::LOW:
        precipitation_val = "Low";
        break;
      case EnvironmentalCondition::Rank::MEDIUM:
        precipitation_val = "Medium";
        break;
      case EnvironmentalCondition::Rank::HIGH:
        precipitation_val = "High";
    }

    //----------------------------------------------------------------------------
    // Bekommt die Temperatur Verhältnisse
    //----------------------------------------------------------------------------
    hot = ec.isItHot();
    rainy = ec.isItRainy();
    stormy = ec.isItStormy();

    if(hot == 0) hot_val = "false"; else hot_val = "true";
    if(rainy == 0) rainy_val = "false"; else rainy_val = "true";
    if(stormy == 0) stormy_val = "false"; else stormy_val = "true";

    //----------------------------------------------------------------------------
    // Je nach Witterung werden die verschiedenen Bilder aufgerufen
    //----------------------------------------------------------------------------
    EnvironmentalCondition::Cover sky_cover = ec.getSkyCover();
    switch(sky_cover)
    {
      case EnvironmentalCondition::Cover::SUNNY:
        sky_cover_val =
        "http://www.sozialverein-deutschlandsberg.at/sep_imgs/sunny.png";
        break;
      case EnvironmentalCondition::Cover::CLOUDY:
        sky_cover_val =
        "http://www.sozialverein-deutschlandsberg.at/sep_imgs/cloudy.png";
        break;
      case EnvironmentalCondition::Cover::OVERCAST:
        sky_cover_val =
        "http://www.sozialverein-deutschlandsberg.at/sep_imgs/overcast.png";
        break;
      case EnvironmentalCondition::Cover::VERY_OVERCAST:
        sky_cover_val =
        "http://www.sozialverein-deutschlandsberg.at/sep_imgs/very_overcast.png";
    }



    //----------------------------------------------------------------------------
    // HTML Code für die Seite plus einen Counter der alle 3 Sekunden die Seite
    // aktualisiert und die HTML Seite gleich ausgibt/schreibt
    //----------------------------------------------------------------------------
    environment_html <<  " <!DOCTYPE html>" << std::endl;
    environment_html <<  " <html lang='en'>" << std::endl;
    environment_html <<  " <head>" << std::endl;
    environment_html <<  " <meta charset='utf-8'>" << std::endl;
    environment_html <<  " <meta http-equiv='refresh' content='3'>" << std::endl;
    environment_html <<  " <title>SEP 2017</title>" << std::endl;
    environment_html <<  " <style>body{margin: 20px; padding: 0px;"
                         " background-color: lightblue;}</style>" <<  std::endl;
    environment_html <<  " </head>" << std::endl;
    environment_html <<  " <body>" << std::endl;
    environment_html <<  " <table>" << std::endl;
    environment_html <<  " <tbody>" << std::endl;
    environment_html <<  " <tr>" << std::endl;
    environment_html <<  " <td><strong>Sky cover</strong></td>" << std::endl;
    environment_html <<  " <td></td>" << std::endl;
    environment_html <<  " </tr>" << std::endl;
    environment_html <<  " <tr>" << std::endl;
    environment_html <<  " <td><img src='" << sky_cover_val
                     <<  "' alt='' width='250'"
                         " style='background-color: white; "
                         " border: 1px solid black;' /></td>" << std::endl;
    environment_html <<  " <td>" << std::endl;
    environment_html <<  " <p><strong>Precipitation: </strong>"
                     <<  precipitation_val << "</p>" << std::endl;
    environment_html <<  " <p><strong>Temperature: </strong>"
                     <<  temperature_val << "°C</p>" << std::endl;
    environment_html <<  " <p><strong>Wind: </strong>" << wind_val << "</p>"
                     <<  std::endl;
    environment_html <<  " <p><strong>Hot: </strong>" << hot_val << "</p>"
                     <<  std::endl;
    environment_html <<  " <p><strong>Rainy: </strong>" << rainy_val << "</p>"
                     <<  std::endl;
    environment_html <<  " <p><strong>Stormy: </strong>" << stormy_val << "</p>"
                     <<  std::endl;
    environment_html <<  " </td>" << std::endl;
    environment_html <<  " </tr>" << std::endl;
    environment_html <<  " </tbody>" << std::endl;
    environment_html <<  " </table>" << std::endl;
    environment_html <<  " </body>" << std::endl;
    environment_html <<  " </html>" << std::endl;
  }
  environment_html.close();
}
